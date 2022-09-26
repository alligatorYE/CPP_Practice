//
// Created by alligator on 2022/9/26.
//

#ifndef CPP_PRACTICE_FISH_HPP
#define CPP_PRACTICE_FISH_HPP
#include <iostream>

using namespace std;

class Fish {

public:
    bool m_isFreshWaterFish;

    void setIsFreshWaterFish(bool value) { m_isFreshWaterFish = value; }

    void Swim()
    {
        if(m_isFreshWaterFish)
        {
            cout << "Fresh WaterFish swim in lake" << endl;
        }
        else
        {
            cout << "Unfresh WaterFish swim in sea" << endl;
        }
    }

};


#endif //CPP_PRACTICE_FISH_HPP
