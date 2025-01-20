#include <stdio.h>

typedef char string[] ;

typedef struct{
    int age;
    float height;
    char name[60];
}User;

int main(){
    // typedef <=> reserved keyword that gives an existing datatype a "nickname"

    string full_name = "Taha Yasser Adnan";

    User taha = {16, 1.83, "Taha Yasser Adnan"};

    printf("%s\n",full_name);

    return 0;
}