#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

//function to display all numbers in sequential container v
void displayNumbersInVector( const vector<int>& v )
{
    for (int i=0;i<v.size();i++)
        cout << v[i] << " "
        << endl;
}

void test1()
{
        cout << "test function 1" << endl;
        vector<int> num; //declared num to be a sequential container of integerd
        num.push_back(1); //add 1 into the container
        num.push_back(4); //add 4 into the container
        num.push_back(3); //add 3 into the container
        cout << "size = " << num.size() << endl; //display container's size so far
        cout << "number in container are : ";
        displayNumbersInVector(num);
}
int main()
{
    test1();
}