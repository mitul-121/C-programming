   #include <stdio.h>
   int sum (int num) {
       static int sum;
       sum += num;
       return sum;
     
   }

   int main() {
       printf("%d ",sum(55));
       printf("%d ",sum(45));
       printf("%d ",sum(50));
       return 0;
   }
