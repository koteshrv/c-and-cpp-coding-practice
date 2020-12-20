#include <bits/stdc++.h>
using namespace std;

struct element {
    int count, index, value;
};

bool comp(struct element a, struct element b) {
    if(a.count != b.count)  return (a.count < b.count);
    return (a.value < b.value);
}

bool compare(struct element a, struct element b) {
    return (a.value < b.value);
}

void sort(int ar[], int n) {
    struct element array[n];
    for(int i = 0; i < n; i++) {
        array[i].index = i;
        array[i].count = 0;
        array[i].value = ar[i];
    }

    stable_sort(array, array + n, compare);
    
    array[0].count = 1;

    for(int i = 1; i < n; i++) {
        if(array[i].value == array[i - 1].value)  {
            array[i].count += array[i - 1].count + 1;
            array[i - 1].count = -1;
            array[i].index = array[i - 1].index;
        }  

        else array[i].count = 1;
    }

    // for(int i = 0; i < n; i++) cout << array[i].value << " " << array[i].count << endl;
    
    stable_sort(array, array + n, comp);

    //for(int i = 0; i < n; i++) cout << array[i].value << " " << array[i].count << endl;

    for(int i = 0, index = 0; i < n; i++) {
        if(array[i].count != -1)
            for(int j = 0; j < array[i].count; j++) ar[index++] = array[i].value;
    }
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int ar[n];
        for(int i = 0; i < n; i++)  cin >> ar[i];
        sort(ar, n);
        for(int i = 0; i < n; i++)  cout << ar[i] << " ";
        cout << endl;
    }

    return 0;
}