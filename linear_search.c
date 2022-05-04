#include<stdio.h>

int linear_search(int a[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(a[i] == key) {
            return i+1;
        }
    }
    return -1;
}

int main() {
    int a[10], n, key, pos;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the key to be searched: ");
    scanf("%d", &key);

    // calling linear_search function
    pos = linear_search(a, n, key);

    // printing result
    if(pos == -1) {
        printf("Element not found\n");
    } else {
        printf("Element found at %d position\n", pos);
    }
    return 0;
}
