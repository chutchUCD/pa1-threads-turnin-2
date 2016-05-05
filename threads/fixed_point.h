

#include <stdint.h>
// 17 bit whole number, "," 14 bit decimal
// n = int
// y = fix point.
static int  f = 16384;
//p = 17, q = 14,




// convert n to fix point.
int convert_to_fixed_point(int n){
  return n * f;
}

// convert x to integer.
int covert_to_integer(int x){
  return x / f;
}
// convert to int then round to low nearest 
int covert_to_integer_round(int x){
  if(x >= 0)
    return (x + f / 2) / f;
  else
    return (x - f / 2) / f;
}

// add 2 number
 int add_fixed_point(int x, int y){
  return x + y;
}

// 
 int subtract_fixed_point(int x, int y){
  return x - y;
}

//add x and n
int add_fixed_and_integer(int x, int y)
{
  return x + (y * f);
}

// subtrack 
 int sub_fixed_and_integer(int x, int y){
  return x - (y * f);
}

// multiply by y
 int multiply_fixed_point(int x, int y){
  return ((int64_t) x) * y / f;
}

// mul by n
 int multiply_fixed_and_integer(int x, int y){
  return x * y;
}

// divide fix point
 int divide_fixed_point(int x, int y){
  return ((int64_t) x) * f / y;
}

// 
 int divide_fixed_and_integer(int x, int y)
{
  return (x / y);
}

