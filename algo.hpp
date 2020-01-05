#ifndef ALGO_HPP
#define ALGO_HPP

#include "cube.hpp"
#include <vector>
#include <memory>

//using namespace std;

namespace rubiks_cube{
typedef std::pair<face_type, int> move_step_t;
typedef std::vector<move_step_t> move_seq_t;

class algo_t{
    public:
        virtual ~algo_t() = default;
    public:
        virtual void init(const char* file = nullptr) = 0;
        virtual void save(const char* file) = 0;
        virtual move_seq_t solve(cube_t) const = 0;
            
};

std::shared_ptr<algo_t> create_krof_algo(int thread_num = 1);
//std::shared_ptr<algo_t> create_kociemba_algo(int thread_num = 1);

}

#endif