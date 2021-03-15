#include "npfft.h"
#include <stdio.h>
#include <stdlib.h>


void print_doubles(double * data, int size)
{
    for(int i=0;i<size;i++)
        printf("%.3lf ",data[i]);
    printf("\n");
}

int main(int nargs, char *argv[])
{
  double c[] = {6,4,5,43,5,6,4,5,3,5,34,34,345,45,4,5,5,6,3,6,3,5,4,6,4,6,4,23,3,4,53,4,3,5,34,35};
  double stft[257];
  
  int n_fft = 15; 
  int features = 2*(n_fft/2 + 1);
  double * out = (double *) malloc(sizeof(double) * features);
  fft(c,n_fft,out);
  print_doubles(out,features);
  free(out);
  return 0;
}