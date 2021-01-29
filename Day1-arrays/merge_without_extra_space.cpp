// int nextGap(int gap)
// {
//     if (gap <= 1)
//         return 0;
//     return (gap / 2) + (gap % 2);
// }
 
void merge(int* arr1, int* arr2, int n, int m)
{
    //  for(int i=0;i<n;i++){
    //     if(arr1[i]>arr2[0]){
    //         swap(arr1[i],arr2[0]);
    //     }
    //     int first=arr2[0];
    //     int k=1;
    //     for(k=1;k<m && arr2[k]<first;k++){
    //         arr2[k-1]=arr2[k];
    //     }
    //     arr2[k-1]=first;
    // }
    int i, j, gap = (n + m)/2;
    for(int gap=ceil((n+m)/2);gap>=1;gap=ceil(gap/2))
    {
        // comparing elements in the first array.
        for (i = 0; i + gap < n; i++)
            if (arr1[i] > arr1[i + gap])
                swap(arr1[i], arr1[i + gap]);
 
        // comparing elements in both arrays.
        for (j = gap > n ? gap - n : 0; 
             i < n && j < m;
             i++, j++)
            if (arr1[i] > arr2[j])
                swap(arr1[i], arr2[j]);
 
        if (j < m) {
            // comparing elements in the second array.
            for (j = 0; j + gap < m; j++)
                if (arr2[j] > arr2[j + gap])
                    swap(arr2[j], arr2[j + gap]);
        }
    }
}
