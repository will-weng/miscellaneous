#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

   int array[6] = {0,1,2,3,4,5};
   int counter = 0;

   while(counter < 6) {
      if(array[counter] == 3) {
         break;
      }
      counter++;
   }

   int i = 0;
   while(1+1 ==2 ){
	printf("%d  ",i);
	i = i + 10000;
	}

   printf("position %d\n", array[counter]);

   return EXIT_SUCCESS;
}
