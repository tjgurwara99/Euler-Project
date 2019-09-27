#include<iostream>
#define NUM 1000000

void next_permutation(int arr[]){
	int i, j;
	i = j = 9;
	while(i>0 and arr[i-1] >= arr[i])
		i--;
	if(i<=0){
		std::cout<<"last possible permutation"<<std::endl;
	}
	while(arr[j] <= arr[i-1])
		j--;
	
	int temp = arr[i-1];
	arr[i-1] = arr[j];
	arr[j] = temp;
	j = 9;
	while(i<j){
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
}

void permute(int num){
	long i = 1;
	int arr[] = {0,1,2,3,4,5,6,7,8,9};
	while(i<num){
		next_permutation(arr);
		i++;
	}
	for(int i = 0; i < 10; ++i){
		std::cout<< arr[i];
	}
	std::cout<< std::endl;
}

int main(){
	permute(NUM);
	return 0;
}
	
