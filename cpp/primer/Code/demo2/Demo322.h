//
// Created by RS on 2019/2/26.
//

#ifndef CODE_DEMO322_H
#define CODE_DEMO322_H


#include <string>
#include "../RunTest.h"

class Demo322 : public RunTest{
public:
    void run() override {
        int a=3;
//        std::string b="q"+"3";//���������ַ�������ֵ�ǲ�����ֱ����ӵ�
        std::string b="q"+std::string("3");//�����ַ�������ֵ�ǲ�����ֱ����ӵ�
    }
};


#endif //CODE_DEMO322_H
