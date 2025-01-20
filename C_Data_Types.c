#include <stdio.h>
#include <stdbool.h>

int main(){
    /* %x is a format specifier used to display a variable of a certain type.
    Where x change according to the type
    */

    char a = 'a'; // Single character %c
    char name[] = "Slim Shady"; // array of characters %s

    float pi_7digits = 3.141592; // 4 bytes (32 bits of percision) 6~7 digits %f ; Faster, less accurate
    double pi_16digits = 3.1415926535897932; // 8 bytes (64 bits of percision) 15~16 digits %lf (long_float); Slower, more accurate

    bool truthy = true; // 1 byte (true[1] or false[0]) %d
    bool flasy = false;

    char an_integer = 69; // 1 byte [|-128 , 127|] %d or %c
    unsigned char A_positive_integer = 255; // 1 byte [|0 , 255|] %d or %c
    /*Notes: 
    The unsigned keyword means that the value will be positive and so the range doubles e.g: [|-128 , 127|] => [|0 , 255|]
    The signed keyword, default one, means that the value can be either positive or negative.
        The unsigned keyword works something like this; say we have a type that allow storing values in a [|a , b|] adding the unsigned keyword will make the range [|0 , b + (-a)|]
    Using the char while storing an integer, values over 127 won't be converted to characters using the %c format specifier, they will give something like this �
    */

    short int short_integer = 32767; // 2 bytes [|-32,768 ; 32,767|] %d ;Note: we can use "short short_integer" no need for the int  
    unsigned short int short_positive_integer = 65535; // 2 bytes [|0 ; 65,535|] %d

    int a_big_integer = 2147483647; // 4 bytes [|-2,147,483,648 ; 2,147,483,647|] %d
    unsigned a_big_positive_integer = 4294967295; // 4 bytes [|0 ; 4,294,967,295|] %u

    /*
    Going out of the range will cause an overflow reseting to the minimal value.
    For example in a range of [|a,b|], we're asigning a c value where c = b + 1 , this will cause an overflow and the value will become
    */

    long long int a_very_long_integer = 9223372036854775807; // 8 bytes [|-2^63 , 2^63 - 1|] %lld
    unsigned long long int a_very_long_positive_integer = 18446744073709551615U; // 8 bytes [|0 , 2^64 - 1|] %llu

    printf("The first letter of the alphabet is %c\n", a);
    printf("My name is, My name is, Shicky Shicky %s\n", name);

    printf("Here’s the value of pi to 7 decimal places:\n%f\n", pi_7digits);
    printf("Here’s the value of pi to 16 decimal places:\n%0.16lf\n", pi_7digits);

    printf("true => %d\n", truthy);
    printf("flase => %d\n", flasy);

    printf("When storing an integer (-128~128) as a char, 69 in this case, there is two ways to display it\nUsing the %%c format specifier which will convert it according to the ASCII table like this: 69 => %c\nUsing the %%d format specifier which will display it as an integer like this: %d\n", an_integer, an_integer);

    printf("A positive integer displayed using the %%d format specifier%d\n", A_positive_integer);

    printf("To display an unsigned integer we use the %%u format specifier like: %u\n", a_big_positive_integer);

    printf("A very long integer is displayed using the %%lld format specifier like: %lld\n", a_very_long_integer);
    printf("A very long positive integer is displayed using the %%llu format specifier like: %llu\n", a_very_long_positive_integer);

    return 0;
}