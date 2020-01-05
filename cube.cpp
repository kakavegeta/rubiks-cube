#include "cube.hpp"
#include <cstring>

namespace rubiks_cube{


cube_t::cube_t(){
    std::memset(co, 0, sizeof(co));
    std::memset(eo, 0, sizeof(eo));
    for(int i = 0; i < 8; ++i){
        cp[i] = i;
    }
    for(int i = 0; i < 12; ++i){
        ep[i] = i;
    }

}





}