
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int x[3];
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int findmed(int a,int b,int c){
    
    int i,j;
    x[0]=a;
    x[1]=b;
    x[2]=c;
    for(i=0;i<=1;i++){
        for(j=i+1;j<=2;j++){
            if(x[i]>x[j]) swap(&x[i],&x[j]);
        }
    }
    return x[1];
}

void quicksort(int *data, int left, int right)
{
    int pivot, i, j,x;
   
    
    
    if (left >= right) { return; }
    
    x=rand()%(right-left+1)+left;
    swap(&data[x],&data[left]);
        pivot = data[left];
    

    
    i = left + 1;
    j = right;
    
    while (1)
    {
        while (i <= right)
        {
            if (data[i] > pivot)
            {
                break;
            }
            
            i = i + 1;
        }
        
        while (j > left)
        {
            if (data[j] < pivot)
            {
                break;
            }
            
            j = j - 1;
        }
        
        if (i > j) { break; }
        
        swap(&data[i], &data[j]);
    }
    
    swap(&data[left], &data[j]);
    
    quicksort(data, left, j - 1);
    quicksort(data, j + 1, right);
}


int main(void)
{
    int i, n=0, data[10000];
    
    
    while(scanf("%d",&data[n])){
        if(data[n]==120)break;
        n++;
    }
    clock_t start, end;
    
    // Start Record the time
    start = clock();
    
    // Your program....
    
    // Record the end time
    
    
    
    // 執行快速排序法
    quicksort(data, 0, n - 1);
    
    end = clock();
    for (i = 0; i < n; i++)
    {
        printf("%d ", data[i]);
    }
    
    printf("\n");
    double diff = end - start; // ms
    printf(" %f  ms" , diff);
    printf(" %f  sec", diff / CLOCKS_PER_SEC );
    system("pause");
}


