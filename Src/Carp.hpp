//
// Created by alligator on 2022/9/26.
//

#ifndef CPP_PRACTICE_CARP_HPP
#define CPP_PRACTICE_CARP_HPP
#include "Fish.hpp"

class Carp : public Fish{
public:
    Carp()
    {
        m_isFreshWaterFish = true;
    }
};


#endif //CPP_PRACTICE_CARP_HPP
