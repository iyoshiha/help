#! /bin/zsh

cd libft_20220101 && make clean && make && make clean && cd ../
gcc *.c libft_20220101/libft.a -I ./include -g
./a.out 10 30 20
