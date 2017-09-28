//Authors: Bianca Cervantes, Karina Zamacona

#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main ()
{
string item;
char input;
vector<string> glist;
      
      do
     { cout<< "Add to list (A)"<<endl;
       cout<<"Show full list (S)"<<endl;
       cout<<"Quit (Q)"<<endl;
       cin>>input;
                if(input=='A' || input=='a')
                {

                        cout<<"What item would you like to add?"<<endl;
                        cin>>item;
                        glist.push_back(item);
                }
                else if (input=='S' || input=='s')
                {
                        for (int i=0;i<glist.size() ;i++)
                        { 
                            cout<<glist[i]<<endl;
                        }    
                }
 
     } while (input!='Q'&& input!='q');
return 0;
}
