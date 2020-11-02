/******************************************************************************

Bridget Naylor 
Lab 9 Part 2

*******************************************************************************/

#include <iostream>

using namespace std;

class gamma
{
    private:
        int ID;
    public:
        static int numGamma;
        gamma();
        ~gamma();
        static void showtotal();
        void showid();
};

gamma::gamma()
{
    numGamma ++;
    ID = numGamma;
}

gamma::~gamma()
{
    if ( numGamma == 3 )
    {
        //reset everything
        for ( int i = numGamma; i > 0; i-- )
        {
            cout<<"Destroying ID number: "<<i<<endl;
        }
        numGamma = 0;
    }
}

void gamma::showtotal()
{
    cout<<"Total is: "<<numGamma<<endl;
}

void gamma::showid()
{
    cout<<"ID number is: "<<ID<<endl;
}

int gamma::numGamma = 0;

int main()

   {

        gamma g1;
    
        gamma::showtotal();

        gamma g2, g3;
    
        gamma::showtotal();
    
     
    
        g1.showid();
    
        g2.showid();
    
        g3.showid();
    
        cout << "----------end of program----------\n";
    
        return 0;

   }
