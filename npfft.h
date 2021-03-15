//Copyright (C) 2020-2021 CHEN Siyu

#ifndef LOCAL_FFT
#define LOCAL_FFT

struct cfft_plan_i;
typedef struct cfft_plan_i * cfft_plan;
struct rfft_plan_i;
typedef struct rfft_plan_i * rfft_plan;

//extern "C" 
//{

/* 
Usage: input must be longer than n_fft. 
Output format: [real,imag,real,imag,...]. output size is 2*(n_fft//2 +1), which is typically larger than signal input.
Notice: you shall manually malloc for out point. and please remember to free out pointer.
*/
int fft(double * signal,int n_fft, double * out);

/*
Usage: not for ordinary users.
*/
static int rfft_forward(rfft_plan plan, double c[], double fct);


//}
#endif