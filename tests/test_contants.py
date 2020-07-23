import sys
sys.path.append('..')

import quantalon_ctp


def test():
    THOST_TERT_RESTART = quantalon_ctp.constants.THOST_TERT_RESTART
    THOST_TERT_RESUME = quantalon_ctp.constants.THOST_TERT_RESUME
    THOST_TERT_QUICK = quantalon_ctp.constants.THOST_TERT_QUICK


    print(f"THOST_TERT_RESTART: {THOST_TERT_RESTART} {type(THOST_TERT_RESTART)}")
    print(f"THOST_TERT_RESUME: {THOST_TERT_RESUME} {type(THOST_TERT_RESUME)}")
    print(f"THOST_TERT_QUICK: {THOST_TERT_QUICK} {type(THOST_TERT_QUICK)}")


    THOST_FTDC_EXP_Normal = quantalon_ctp.constants.THOST_FTDC_EXP_Normal
    print(f"THOST_FTDC_EXP_Normal: {THOST_FTDC_EXP_Normal} {type(THOST_FTDC_EXP_Normal)}")


if __name__ == '__main__':
    test()
