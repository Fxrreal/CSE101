#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


int main() {
   srand(time(NULL));
  float Q[3][3];
  int U = 100.0;
  int L = -100.0;
  float deteminant;
  float adj;
  float inverse;
  for(int i=0 ; i<3; i=i+1){
    for(int j=0 ; j<3; j=j+1){
     Q[i][j] = (rand()%(U-L+1))+L;
      printf("%.3f\t",Q[i][j]);
      }printf("\n");
  }
  deteminant =(Q[0][0]*Q[1][1]*Q[2][2])+(Q[0][1]*Q[1][2]*Q[2][0])+(Q[0][2]*Q[1][0]*Q[2][1])-(Q[2][0]*Q[1][1]*Q[0][2])-(Q[2][1]*Q[1][2]*Q[0][0])-(Q[2][2]*Q[1][0]*Q[0][1]);
  printf("\n");
  printf("deteminant=%.3f\n",deteminant);
  float Y[3][3];
      Y [0][0] = ((Q[1][1]*Q[2][2])-(Q[1][2]*Q[2][1]))/deteminant;
      Y [0][1] = -((Q[0][1]*Q[2][2])-(Q[0][2]*Q[2][1]))/deteminant;
      Y [0][2] = ((Q[0][1]*Q[1][2])-(Q[0][2]*Q[1][1]))/deteminant;
      Y [1][0] = -((Q[1][0]*Q[2][2])-(Q[1][2]*Q[2][0]))/deteminant;
      Y [1][1] = ((Q[0][0]*Q[2][2])-(Q[0][2]*Q[2][0]))/deteminant;
      Y [1][2] = -((Q[0][0]*Q[1][2])-(Q[0][2]*Q[1][0]))/deteminant;
      Y [2][0] = ((Q[1][0]*Q[2][1])-(Q[1][1]*Q[2][0]))/deteminant;
      Y [2][1] = -((Q[0][0]*Q[2][1])-(Q[0][1]*Q[2][0]))/deteminant;
      Y [2][2] = ((Q[0][0]*Q[1][1])-(Q[0][1]*Q[1][0]))/deteminant;


  for(int i=0 ; i<3; i=i+1){
    for(int j=0 ; j<3; j=j+1){
      printf("%.3f\t",Y[i][j]);
      }printf("\n");
  }


 return 0;
}