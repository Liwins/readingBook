//
// Created by RS on 2019/1/24.
//

#ifndef CLION_DEMO28_H
#define CLION_DEMO28_H


#include <numeric>
#include "Abstruct.h"
/**
 * ��������
 * @tparam Iterator   ����������
 * @tparam T  ���ؽ��
 */
template<typename Iterator, typename T>
struct accumulate_block {
    void operator()(Iterator first, Iterator last, T &result) {
         std::accumulate(first,last,result);
    }
};

class Demo28 : public Abstruct {
public:
    void run() override;
    template <typename Iterator,typename T>
    T parallel_accumulate(Iterator first,Iterator last,T init);
};


#endif //CLION_DEMO28_H
