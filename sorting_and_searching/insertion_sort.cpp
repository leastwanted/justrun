#include <algorithm>
#include <iostream>

using namespace std;

void insertion_sort(int s[], int n){
    int i,j;  // counters
    for (i=1; i<n; ++i){
        j = i;
        while ((j>0) && (s[j] < s[j-1])){
            swap(s[j], s[j-1]);
            j = j-1;
        }
    }
}

int main()
{
    int s[] = {5,3,2,1,4,6,9,0,8,7};
    int n = 10;

    insertion_sort(s, n);

    for (int i=0; i<n; ++i)
    {
        cout << s[i];
    }
    cout << endl;
    return 0;
}