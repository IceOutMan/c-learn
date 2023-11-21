#include <string.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{

    char* name = "ZhangSan";
    printf("Hello %s\n", name); 
    int len = strlen(name);
    printf("len = %d\n", len);
    return 0;
}
