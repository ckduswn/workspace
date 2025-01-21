/*
variable : value를 담는 변수
pointer variable : 주소를 담는 변수
array : 동일한 자료형의 여러 값을 담는 배열  
pointer array : 여러 포인터 변수를 담는 배열 
array and pointer : 포인터를 이용해서 배열을 사용하는 방법 (!= pointer array) 

*/
#include <stdio.h>
int main() {
	// pointer array 
	int *arr[3];
	int a = 12, b = 24, c = 36;

	arr[0] = &a;		// pointer array : 주소 담기 
	arr[1] = &b;
	arr[2] = &c;
	// **arr : 이중pointer == *(*arr)
	// *arr == ar[0]과 동일한 주소
	// *arr == arr[0] == &a 
	printf("%d\n", *arr[1] + **arr + 1);  // 24 + (12+1) = 37
}