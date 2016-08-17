#include <iostream>

using namespace std;

void merge(int a[],int low,int mid,int mid2,int high)
{
    int i=low,j=mid2,k=0,b[high-low+1];
    while(i<mid2 && j<=high)
    {
        if(a[i]<a[j]){
            b[k]=a[i];
            k++;
            i++;
        }
        else{
            b[k]=a[j];
            k++;
            j++;
        }
    }
    while(i<mid2)
    {
        b[k]=a[i];
        i++;
        k++;
    }
    while(j<=high)
    {
        b[k]=a[j];
        j++;
        k++;
    }
    for(int i=0;i<(high-low+1);i++)
    {
        a[i+low]=b[i];
    }
}

void mergeSort(int a[],int first,int last)
{
    if(first>=last)
        return;
    int middle=(first+last)/2;
    mergeSort(a,first,middle);
    mergeSort(a,middle+1,last);
    merge(a,first,middle,middle+1,last);
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    mergeSort(a,0,n-1);
    for(int j=0;j<n;j++)
    {
        cout<<a[j];
    }
    return 0;
}
