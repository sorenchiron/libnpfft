# libnpfft

## Portable C implementation of Numpy/Librosa fft

## Usage

```bash
make # compile static and shared libnpfft library
make static
make dynamic
make runstatic # example program using static libnpfft
make rundynamic # example program using shared libnpfft
```
this will gives you `libnpfft.a` and `libnpfft.so` under current directory

see `main.c` for usage example.

