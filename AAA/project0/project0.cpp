#include <iostream>
using namespace std;

int main()
{
    int userinput;
    cout << "Num: ";
    cin >> userinput;

    if(userinput < 0 || userinput >= 999)
    {
        return 0;
    }
    // i = 1 to print * else it just no space
    for(int i = 1; i <= userinput; i++)
    {
        // print space
        for (int j = 0; j < userinput - i; j++)
        {
            cout << " ";
        }
        // print *
        for(int j = 0; j < (2 * i + 1); j++)
        {
            cout << "*";
        }
        
        // spacedown
        cout << endl;
        

        // print space for alternation
        for (int j = 0; j < userinput - i; j++)
        {
            cout << " ";
        }

        // print * *
        bool switching = true;
        for(int j = 0; j < (2 * i + 1); j++)
        {
            if(switching == true)
            {
                cout << "*";
                switching = false;
            }
            else
            {
                cout << " ";
                switching = true;
                
            }
        }
        cout << endl;

       
        
    }
    for (int i = 0; i < (2* userinput + 1); i++)
        {
            cout << "*";
        }
    // print final space row
        
    cout << endl;
    
    


    
}