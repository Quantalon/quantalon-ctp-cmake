import sys
sys.path.append('..')

import quantalon_ctp


def test():
    help(quantalon_ctp.ctp.structs.CThostFtdcDisseminationField)

    F = quantalon_ctp.ctp.structs.CThostFtdcDisseminationField
    f = F()
    print(f)

    print(f.SequenceSeries)

    f.SequenceSeries = 123


if __name__ == '__main__':
    test()
