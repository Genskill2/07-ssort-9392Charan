void swap_max(int arr[], int len, int index){ 
 int max = index;
   for(int i = index ; i < len; i++){
     if( arr[i] > arr[max] ){
       max = i;
      }
    }
     
     arr[max] = arr[index];
    
  
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
