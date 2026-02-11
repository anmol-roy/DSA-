#include <iostream>
using namespace std;

int SumOfElements (int A[])
{
    int i, sum = 0;
    int size = sizeof(A)/sizeof(A[0]);
    for(i = 0; i < size; i++)
    {
        sum += A[i];
    }
    return sum;
}

int main()
{
    int A[] = {1,2,3,4,5};
    int total = SumOfElements(A);
    cout << "Sum of elements = " << total << endl;
    return 0;
}
