#ifndef CUBE_HPP
#define CUBE_HPP

#include<utility>
#include<cstdint>

//using namespace std;

namespace rubiks_cube{

enum face_type{top = 0, bottom = 1, front = 2, back = 3, left = 4, right = 5};

struct face_t{
    int8_t c[9];
};

struct block_t{
    int8_t top, bottom, front, back, left, right;
};

using block_info_t = std::pair<const int8_t*, const int8_t*>;

class cube_t{
    public:
        cube_t();
        block_t get_block(int*, int, int) const;
        block_info_t get_corner() const;
        block_info_t get_edge() const;
        void rotate(face_type, int count = 1);

    private:
        int8_t cp[8], co[8]; // cornor's position and orientation
        int8_t ep[12], eo[12]; // edge's position and orientation
};
}
#endif