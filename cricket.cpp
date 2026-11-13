#include <iostream>
using namespace std;
struct cricket{
    string playername ;
    string Teamname;
    float battingaverage;
};
int main ()
{
    cricket s[50];
    int i;
    for(i=0;i<50;i++){
        cout<<"enter the name of the player\n";
        cin>>s[i].playername;
        cout<<"enter the name of the team\n";
        cin>>s[i].Teamname;
        cout<<"enter the battingaverage\n";
        cin>>s[i].battingaverage;
    }
    for(i=0;i<50;i++){
        cout<<"\nplayer name is "<<s[i].playername;
        cout<<"\nTeam name"<<s[i].Teamname;
        cout<<"\nBatting average"<<s[i].battingaverage;
    }
    return 0; 
}
