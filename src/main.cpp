#include <iostream>
#include <vector>

#include "mersenne_storm.hpp"
#include "rng.hpp"

int main() {
    Engine_OOP_Approach::rng<
        double,
        std::vector<double>,
        std::allocator<double>,
        Engine_OOP_Approach::mersenne_storm_engine<double>
    > generator;

    uint n = 10;
    for(uint i = 0; i < n; i++) {
        std::cout << generator() << std::endl;
    }

}
