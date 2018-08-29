#include <iostream>

using namespace std;

int main()
{

    int n;
    bool number=false;
    cout<<"enter a number: ";
    cin>>n;

    for(int i=2; i<n;i++)
    {

        if(n%i==0){
            number=true;
            break;


        }



    }

    if(number==false && n>1)
    {

        cout<<n<<" is a prime number";

    }
    else{



        cout<<n<<" is not a prime number";
    }




    return 0;
}
