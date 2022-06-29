/* Fixed Integer Constants defined in <cstdint>*/
#include <iostream>
#include <cstdint>
using namespace std;
int main(){
    /* signed integer type with width of exactly 8, 16, 32 and 64 bits respectively
with no padding bits and using 2's complement for negative values
(provided if and only if the implementation directly supports the type)*/

    int8_t a = -128; //int8_t denotes a signed integer type with a width of exactly 8 bits
    int16_t b = -32768; //int16_t denotes a signed integer type with a width of exactly 16 bits
    int32_t c = -2147483648; //int32_t denotes a signed integer type with a width of exactly 32 bits
    int64_t d = -922;//int64_t denotes a signed integer type with a width of exactly 64 bits
    cout <<  "a = " << a <<"\n";
    cout <<  "b = " << b <<"\n";
    cout <<  "c = " << c <<"\n";
    cout <<  "d = " << d <<"\n";

    /*fastest signed integer type with width of at least 8, 16, 32 and 64 bits respectively*/

    int_fast8_t e = -127; // fastest(for the processor)signed integer type with a width of at least 8 bits
    int_fast16_t f = -32768;//fastest(for the processor)signed integer type with a width of at least 16 bits
    int_fast32_t g = -2147483648;//fastest(for the processor)signed integer type with a width of at least 32 bits
    int_fast64_t h = -922;//fastest(for the processor)signed integer type with a width of at least 64 bits
    cout <<  "e = " << e <<"\n";
    cout <<  "f = " << f <<"\n";
    cout <<  "g = " << g <<"\n";
    cout <<  "h = " << h <<"\n";

    /*smallest signed integer type with width of at least 8, 16, 32 and 64 bits respectively*/

    int_least8_t i = -126; // smallest(for the processor)signed integer type with a width of at least 8 bits;  
    int_least16_t j = -32768;//smallest(for the processor)signed integer type with a width of at least 16 bits;
    int_least32_t k = -2147483648;//smallest(for the processor)signed integer type with a width of at least 32 bits;
    int_least64_t l = -922;//smallest(for the processor)signed integer type with a width of at least 64 bits;
    cout <<  "i = " << i <<"\n";
    cout <<  "j = " << j <<"\n";
    cout <<  "k = " << k <<"\n";
    cout <<  "l = " << l <<"\n";

/* maximum-width signed integer type */
    intmax_t m = -922372036854;//maximum-width signed integer type;
    cout <<  "m = " << m <<"\n";

/*unsigned integer type with width of exactly 8, 16, 32 and 64 bits respectively
(provided if and only if the implementation directly supports the type)*/

    uint8_t n = 128; //uint8_t denotes an unsigned integer type with a width of exactly 8 bits
    uint16_t o = 65535; //uint16_t denotes an unsigned integer type with a width of exactly 16 bits
    uint32_t p = 4294967295; //uint32_t denotes an unsigned integer type with a width of exactly 32 bits
    uint64_t q = 922;//uint64_t denotes an unsigned integer type with a width of exactly 64 bits
    cout <<  "n = " << n <<"\n";
    cout <<  "o = " << o <<"\n";
    cout <<  "p = " << p <<"\n";
    cout <<  "q = " << q <<"\n";
/*fastest unsigned integer type with width of at least 8, 16, 32 and 64 bits respectively*/

    uint_fast8_t r = 126; // fastest(for the processor)unsigned integer type with a width of at least 8 bits
    uint_fast16_t s = 65535;// fastest(for the processor)unsigned integer type with a width of at least 16 bits
    uint_fast32_t t = 4294967295;// fastest(for the processor)unsigned integer type with a width of at least 32 bits
    uint_fast64_t u = 922;// fastest(for the processor)unsigned integer type with a width of at least 64 bits
    cout <<  "r = " << r <<"\n";
    cout <<  "s = " << s <<"\n";
    cout <<  "t = " << t <<"\n";
    cout <<  "u = " << u <<"\n";

/*smallest unsigned integer type with width of at least 8, 16, 32 and 64 bits respectively*/

    uint_least8_t v = 125; // smallest(for the processor)unsigned integer type with a width of at least 8 bits;
    uint_least16_t w = 65535;// smallest(for the processor)unsigned integer type with a width of at least 16 bits;
    uint_least32_t x = 4294967295;// smallest(for the processor)unsigned integer type with a width of at least 32 bits;
    uint_least64_t y = 922;// smallest(for the processor)unsigned integer type with a width of at least 64 bits;
    cout <<  "v = " << v <<"\n";
    cout <<  "w = " << w <<"\n";
    cout <<  "x = " << x <<"\n";
    cout <<  "y = " << y <<"\n";
  
/*maximum-width unsigned integer type*/
    uintmax_t z = 922372036854;//maximum-width unsigned integer type;
    cout <<  "z = " << z <<"\n";


    return 0;   
}