#ifndef CUBE_H
#define CUBE_H

#include<utility>
#include<cstdint>

using namespace std;

namespace cube{

enum face_type{top = 0, bottom = 1, front = 2, back = 3, left = 4, right = 5};

struct face{
    enum face_type{
        top = 0, bottom = 1, front = 2, back = 3, left = 4, right = 5
    };
    int c[9];
};

struct block{
    int top, bottom, front, back, left, right;
};

typedef pair<const int*, const int*> block_info_t;

class cube{
    public:
        cube();

        block get_block(int*, int, int) const;
        block_info get_corner() const;
        block_info get_edge() const;

        void rotate(face_type, int count = 1);
};
}
#endif