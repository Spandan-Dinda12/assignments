#include<stdio.h>
int main(){
    int arr[50],n,srch,i,found=0;
    
    printf("enter num of elements:" );
    scanf("%d",&n);

    printf("enter the elements:");

    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("enter element to find: ");
    scanf("%d",&srch);
    for(i=0;i<n;i++){
        if(arr[i]==srch){
        found==1;
        break;} 
    }
    if(found){
        printf("element found");
    }else{
        printf("element not found");
    }
    return 0;
}


#include <stdio.h>

int main() {
    int a[10], n, x, low = 0, high, mid;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &x);

    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(a[mid] == x) {
            printf("Element found");
            return 0;
        }
        else if(a[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    printf("Element not found");
    return 0;
}