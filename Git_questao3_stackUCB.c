#include <stdio.h>
#include <math.h>

int main()
{
    int catetoB = 4, catetoC = 3, hipotenusa;
    
    hipotenusa = sqrt(catetoC*catetoC + catetoB*catetoB);
    
    printf("%d", hipotenusa);
    
    return 0;
}
