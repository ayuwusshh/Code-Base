 int index=-1;
    for(int i=arr.size()-1;i>=0;i--){
        if(arr[i-1]<arr[i]){
        index=i-1;
        break;
        }
        }
         if(index==-1){
             reverse(arr.begin(),arr.end());
             return;
         }
         for(int j=arr.size()-1;j>index;j--){
            if(arr[j]>arr[index]){
                 swap(arr[j],arr[index]);
             break;
            }
         }
         reverse(arr.begin()+index+1,arr.end());