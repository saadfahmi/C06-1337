#include <unistd.h>
int	main(int argc, char **argv){


    int i;
    int j;
     i =0;
     j = 1;

     while(j < argc){


        i = 0;
        while(argv[i][j]){
            write(1, &argv[i][j], 1);
            i++;




        }

        write(1, "\n", 1);
        j++;



     }
}