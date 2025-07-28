#ifndef BASE62ENCODER_H
#define BASE62ENCODER_H

#include <string>

class Base62Encoder
{
    private:
        static const std::string base62Chars;

    public:
        static std::string encode(int num);
};

#endif