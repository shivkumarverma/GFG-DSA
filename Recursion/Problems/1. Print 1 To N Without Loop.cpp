#include<bits/stdc++.h>
using namespace std;

class solution {
    public :
void printNos(int n)
{
    if( n == 0) return ;
    printNos(n-1);
    cout<<n<<" ";
}
};

int main(){

    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        solution ob;
        ob.printNos(N);


    }
    return 0;
    
}