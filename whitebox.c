#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char *argv[])
{
    //struct movie* file = processFile(argv[1]);
    char* Xstring = argv[1];
    char* Zstring = argv[2];

    int X = atoi(Xstring);
    int Z = atoi(Zstring);

    if (Z == 1) {
        printf("%d", X);
    }
    else if (X < 0) {
        printf("%d", X / (-1));
    }
    else {
        printf("%d", X);
    }

}