//
// Created by alligator on 2022/7/15.
//

#ifndef CPP_PRACTICE_HUMAN_H
#define CPP_PRACTICE_HUMAN_H


class Human {
    int age;
    public:
//    explicit constructor blocks implicit conversions. 显式构造函数阻止隐式转换
    explicit Human(int humanAge) : age(humanAge) {}
};


#endif //CPP_PRACTICE_HUMAN_H
