#include<stdio.h>
int main(){
    float maths,english,hindi,science;
    float sum;
    float percentage;

    printf("enterthe marks of subject:/n");
    scanf( "%f %f %f %f ", &maths,&english,&hindi,&science);
    sum =maths + english + hindi + science; 
 printf("the sum of following marks =%f",sum);

    percentage=(sum*100/400);
 printf("your percentage is : %f/n",percentage);

 return 0;

    
}
    