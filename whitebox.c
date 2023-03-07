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


    if (argc < 2)           // makes sure that user inputs file name as well as executable
    {
        printf("You must provide the name of the file to process\n");
        printf("Example usage: ./movies movies_sample_1.csv\n");
        return EXIT_FAILURE;
    }
    
}