#include <iostream>
#include <vector>
using namespace std;

vector<int> find_all_indices(int arr[], int key)
{
    vector<int> indices;
    for(int i = 0;i < sizeof(arr);i++)
        if(arr[i] == key)
            indices.push_back(i);
    
    return indices;
}

int main()
{
    int test1[5] = {1,2,3,3,4}, test2[5] = {1,1,1,1,1}, test3[5];
    vector<int> test1sol,test2sol,test3sol;

    test1sol = find_all_indices(test1,3);
    cout << endl << "Test1: " << endl;
    for(int index : test1sol)
    {
        cout << index << " ";
    }
    test2sol = find_all_indices(test2,3);
    cout << endl <<  "Test2: " << endl;
    for(int index : test2sol)
    {
        cout << index << " ";
    }
    test3sol = find_all_indices(test3,3);
    cout << endl <<  "Test3: " << endl;
    for(int index : test3sol)
    {
        cout << index << " ";
    }
    

    return 0;
}