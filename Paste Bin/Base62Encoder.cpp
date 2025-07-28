#include "Base62Encoder.h"

const std::string Base62Encoder::base62Chars = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

std::string Base62Encoder::encode(int num)
{
    if(num == 0)
    return "0";

    std::string result;

    while(num > 0)
    {
        result = base62Chars[num % 62] + result;
        num /= 62;
    }
    return result;
}