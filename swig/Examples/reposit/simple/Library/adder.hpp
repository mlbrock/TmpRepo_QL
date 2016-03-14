
#ifndef simplelib_adder_hpp
#define simplelib_adder_hpp

#include <string>

namespace SimpleLib {

    std::string func();

    class Adder {
    private:
        long x_;
    public:
        Adder(long x);
        long add(long y);
    };

};

#endif

