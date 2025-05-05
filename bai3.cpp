#include <stdio.h>
 
 int main(){
 	int num1=10,num2=5;
 	//tinh tong
 	int sum = num1 + num2;
 	printf("tong cu %d va %d la %d\n",num1, num2, sum);
 	// tinh hieu
 	int hieu = num1-num2;
 	printf("hieu cua %d va %d la %d\n", num1,num2,hieu);
 	// tinh tich
  float tich = (float)num1 * num2;
  printf("tich cua %d va %d la %.2f\n", num1, num2, tich);
 	// tinh thuong
 	int thuong = num1 / num2;
 	printf("tong cu %d va %d la %d\n",num1, num2, thuong);
 	return 0;
 }

