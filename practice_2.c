#include <stdio.h>

int main() {
   int n,x;
   
   scanf("%d %d", &n, &x);
   int arr[1000] = {0, };
   
   for(int i =0; i<n; i++){
      scanf("%d",&arr[i]);
   }
   
   for(int i =0; i<n; i++){
      if(arr[i]<x){
         printf("%d ",arr[i]);
      }
   }
   