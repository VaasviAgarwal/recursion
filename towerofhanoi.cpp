#include <iostream>
using namespace std;

void TowerOfHanoi(int n, char Source, char Auxiliary, char Destination)
{
    if(n==1)
    {
        cout<<"Move Disk "<<n<<" from "<<Source<<" to "<<Destination<<endl;
        return;
    }
    TowerOfHanoi(n-1,Source, Destination, Auxiliary);
    cout<<"Mover Disk "<<n<<" from "<<Source<<" to "<<Destination<<endl;
    TowerOfHanoi(n-1, Auxiliary, Source, Destination);
}

int main()
{
    int n;
    cout<<"Enter number of disks : ";
    cin>>n;
    TowerOfHanoi(n,'A','B','C');
    return 0;
}