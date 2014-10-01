#include <stdio.h>
void mergeSort (int data[], int high, int low);
void merge (int data[], int high, int mid, int low);

int main (int argc, char *argv){
  int data[10] = {2,4,5,10,9,1,7,6,3,8};
  int i;
  for (i=0; i!=10; ++i)
    printf("%d ",data[i]);
  printf("\n");

  mergeSort (data,9,0);
  for (i=0; i!=10; ++i)
    printf("%d ",data[i]);
  printf("\n");

  return 0;
}

void mergeSort (int data[],int high, int low){
  if (high>low){
    int mid = (high+low)/2;
    mergeSort (data,high,mid+1);
    mergeSort (data,mid,low);
    merge (data,high,mid,low);
  }
}

void merge (int data[], int high, int mid, int low){
  int k, l, m, temp[10];
  l=low;
  m=mid+1;
  for (k=0;l<=mid || m<=high;k++){
    if (l>mid){
      temp[k] = data[m];
      m++;
    }
    else if (m>high){
      temp[k] = data[l];
      l++;
    }
    else if (data[l]<data[m]){
      temp[k] = data[l];
      l++;
    }
    else{
      temp[k] = data[m];
      m++;
    }
  }

  for (l=low,k=0;l<=high;k++,l++)
    data[l] = temp[k];
}
