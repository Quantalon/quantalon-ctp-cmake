import sys
sys.path.append('..')

import time

from quantalon_ctp import MdApi, TdApi


time.sleep(1)

a = md.MdApi()
a.createApi('')
v = a.getApiVersion()

addr = 'tcp://180.168.146.187:10111'

a.registerFront(addr)
a.init()


input('waiting...')
print(f'version: {v}')
