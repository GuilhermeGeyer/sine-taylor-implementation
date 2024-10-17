
#include <stdio.h>
#include <math.h>

float pi = 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647;

void my_sin(float x, int steps, int is_degree){
    if (is_degree == 1){
        //x = fmod(x, 360);
        x *= pi / 180;
    } else{
        //x = fmod(x, 2 * pi);
    }
    float y = x;
    printf("%f\n",y);
    steps -= 1;
    int z = 2;
    float res = y;
    while (steps > 0){
        y = - y * x * x / (z * (z + 1));
        res += y;
        printf("+ %f -> %f\n",y,res);
        z += 2;
        steps -= 1;
    }
}

int main(){
    my_sin(0.994837674, 10, 0);
    printf("\n");
    my_sin(171, 15, 1);
}
