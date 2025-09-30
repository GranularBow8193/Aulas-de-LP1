#include <stdio.h>

enum Boolean{
    
  false = 0 , true = 1
    
};

int main() {
    
    enum Boolean estado1 = true;
    enum Boolean estado2 = false;
    
    printf("%d\n",estado1);
    printf("%d",estado2);

    return 0;
}
