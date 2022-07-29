#include <iostream>
double weighted_average(int array[], int n) {
 double wa = 0;
 int num;

 if (n < 1){
  return 0;
 }

 for (int i = 0; i < n; i++) {
      num=0; 
  for (int j = 0; j < n; j++) {
   if (array[i] == array[j])
    num++;
  }
  
  wa += 1.0*array[i] * num/n;
 
}
return wa;
 
}