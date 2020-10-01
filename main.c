//
//  main.c
//  Bubble Sort
//
//  Created by Divyansh Rastogi on 04/04/19.
//  Copyright © 2019 Divyansh Rastogi. All rights reserved.
//

/*#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}*/

// Bubble Sort (Ascending Order)  (By Divyansh Rastogi)
// second line
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100], n, i, j, temp;
    
    printf("Enter Number of Elements : ");
    scanf("%d", &n);
    
    printf("Enter %d integers\n", n);
    
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    for (i = 0 ; i < n - 1; i++)
    {
        for (j = 0 ; j < n - i - 1; j++)
        {
            if (a[j] > a[j+1]) // Ascending Order
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    
    printf("Sorted list in ascending order:\n");
    
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
    
    return 0;
}
