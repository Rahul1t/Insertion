# include <stdio.h>
int main (){
    int n;
    printf("Enter the Number of Element: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d Element of the Array: ",n);
    for(int i = 0;i < n; i++){
        scanf("%d",&arr[i]);
    }
    printf("All Element: ");
    for(int i = 0; i < n; i++){
        printf("%d",arr[i]);
    }
    printf("\n");

    return 0;
}