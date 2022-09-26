//
// Created by alligator on 2022/9/26.
//

#ifndef CPP_PRACTICE_TUNA_HPP
#define CPP_PRACTICE_TUNA_HPP
#include "Fish.hpp"

class Tuna : public Fish{
public:
    Tuna()
    {
        m_isFreshWaterFish = false;
    }
};


#endif //CPP_PRACTICE_TUNA_HPP
