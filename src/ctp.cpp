#include <iostream>
#include <pybind11/pybind11.h>

#include "bind_constants.h"
#include "bind_structs.h"
#include "bind_md_api.h"
#include "bind_td_api.h"


PYBIND11_MODULE(ctp, m) {
    bind_constants(m);
    bind_structs(m);
    bind_md_api(m);
    bind_td_api(m);
}
