#include "liquid.python.hh"

#include "firfilt.hh"

PYBIND11_MODULE(liquid, m) {
    m.doc() = "software-defined radio signal processing library";
    init_firfilt(m);
}
