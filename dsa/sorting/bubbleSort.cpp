#include <iostream>
#include <vector>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{

    vector<int> a = {9, 5, 2, 1, 10, 6, 7, 12};

    int n = a.size();
    // cout<<a.size();

    int x = 8, y = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }

    for(auto i:a){
        cout<<i<<" ";
    }

    return 0;
}