# Questions

## What's `stdint.h`?

A header file that declares a set of integers with specified widths across different systems.

## What's the point of using `uint8_t`, `uint32_t`, `int32_t`, and `uint16_t` in a program?

Specifies the number of bytes you intend to use.

## How many bytes is a `BYTE`, a `DWORD`, a `LONG`, and a `WORD`, respectively?

1,4,4,2 respectively.

## What (in ASCII, decimal, or hexadecimal) must the first two bytes of any BMP file be? Leading bytes used to identify file formats (with high probability) are generally called "magic numbers."

In ASCII, The first two bytes of any BMP file must be: BM.

## What's the difference between `bfSize` and `biSize`?

bfSize is the size of of the bitmap file.
biSize is the number of bytes required by the structure.

## What does it mean if `biHeight` is negative?

If biHeight is negative, the bitmap image is top-down and its origin is the upper-left corner.

## What field in `BITMAPINFOHEADER` specifies the BMP's color depth (i.e., bits per pixel)?

biBitCount.

## Why might `fopen` return `NULL` in lines 24 and 32 of `copy.c`?

fopen may return 'NULL' if the file does not exist or can not be found.

## Why is the third argument to `fread` always `1` in our code?

The third argument of 'fread' is always '1' since we are looking through each struct one at a time.

## What value does line 63 of `copy.c` assign to `padding` if `bi.biWidth` is `3`?

3.

## What does `fseek` do?

fseek allows us to change the offset of a pointer.

## What is `SEEK_CUR`?

SEEK_CUR is the current position indicator in the file.
