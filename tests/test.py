import sys
sys.path.append('..')


import quantalon_ctp
from quantalon_ctp import MdApi
from quantalon_ctp.ctp.structs import CThostFtdcReqUserLoginField

# simnow 24小时: 交易前置：180.168.146.187:10130，行情前置：180.168.146.187:10131；【7x24】

class PyMdApi(MdApi):
    """"""
    def init(self, **kwargs):
        self.req_id = 1

        self.flow_path = kwargs['flow_path']
        self.md_addr = kwargs['md_addr']
        self.broker_id = kwargs['broker_id']
        self.user_id = kwargs['user_id']
        self.password = kwargs['password']

        self.CreateApi(self.flow_path)


    def connect(self):
        self.RegisterFront(self.md_addr)
        self.Init()

    def login(self):
        req = CThostFtdcReqUserLoginField()
        req.BrokerID = self.broker_id
        req.UserID = self.user_id
        req.Password = self.password

        self.req_id += 1
        self.ReqUserLogin(req, self.req_id)

    def OnFrontConnected(self):
        print("PyMdApi.OnFrontConnected")
        self.login()

    def OnFrontDisconnected(self, nReason):
        print("PyMdApi.OnFrontDisconnected")
        pass

    def OnRspUserLogin(self, pRspUserLogin, pRspInfo, nRequestID, bIsLast):
        print("PyMdApi.OnRspUserLogin")

        if pRspUserLogin is None:
            print("pRspUserLogin is None")
        else:
            print(f"pRspUserLogin.FrontID: {pRspUserLogin.FrontID}")
            print(f"pRspUserLogin.SessionID: {pRspUserLogin.SessionID}")

        if pRspInfo is None:
            print("pRspInfo is None")
        else:
            print(f"pRspInfo.ErrorID: {pRspInfo.ErrorID}")
            print(f"pRspInfo.ErrorMsg: {pRspInfo.ErrorMsg}")

        print(f"nRequestID {nRequestID}")
        print(f"bIsLast {bIsLast}")

        pass

def help():
    help(quantalon_ctp)
    help(quantalon_ctp.MdApi)
    help(quantalon_ctp.constants)
    pass


def test():

    md_addr = 'tcp://180.168.146.187:10131'
    td_addr = 'tcp://180.168.146.187:10130'
    broker_id = "9999"
    user_id = "113635"
    password = "87654321"
    flow_path = "testflow"

    md_api = PyMdApi()
    md_api.init(
        flow_path=flow_path,
        md_addr=md_addr,
        broker_id=broker_id,
        user_id=user_id,
        password=password
    )

    md_api.connect()

    input('Waiting...')



if __name__ == '__main__':
    test()

