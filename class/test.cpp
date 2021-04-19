
#ifdef __EMSCRIPTEN__
#include <emscripten/bind.h>
using namespace emscripten;
#endif
#include<iostream>
#include<stdlib.h>


class Myclass{
    int a,b,c;
    int Result;
    public:
    Myclass(int _a,int _b, int _c){
        a = _a;
        b = _b;
        c = _c;
    }
    void MultipleAll(){
        Result = a * b *c;
    }
    int getResult(){
        return Result;
    }
};

#ifdef __EMSCRIPTEN__
EMSCRIPTEN_BINDINGS(my_class_example){
    class_<Myclass>("MyClass")
    .constructor<int, int, int>()
    .function("MultipleAll", &Myclass::MultipleAll)
    .function("getResult", &Myclass::getResult);
}
#endif
