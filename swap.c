void swap_max(int arr[], int len, int index){
  int flag = 0; 
 int max = index;
   for(int i = index ; i < len; i++){
     if( arr[i] > arr[max] ){
       max = i;
      }
    }
     flag = arr[max];
     arr[max] = arr[index];
     arr[index] = flag;
  
   }

void ssort(int arr[], int len){
   for(int i = 0; i<len ; i++){
     swap_max(arr,len,i);
   }
   for(int i = 0; i<len ; i++){
   printf("| %i |",arr[i]);
  }
  printf("\n");
}
