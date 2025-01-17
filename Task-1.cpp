#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    cout<<"\n\t\t----------Welcome to the Game------------\n"<<endl;
    cout<<"\n\t\t--->>Guess a number between 1 to 100."<<endl;;
    cout<<"\n\t\t--->>Let's Start"<<endl;

    srand(time(0));
    int randomNumber=(rand()%100)+1;

    cout<<"\n>>You have total 5 chances to guess a number<<\n";
    int chanceleft=5;
    int playerInput;

    for(int i=1;i<=5;i++){
        cout<<"\nEnter the Number";
        cin>>playerInput;

        if(playerInput==randomNumber){
            cout<<"\nYou have successfully guessed the right number\n";
            cout<<"\n Thanks for playing.Have a nice day";  
            break;
        }
        else{
            if(playerInput<randomNumber){
                cout<<"\nInsert a larger Number"<<endl;
            }
            else{
                cout<<"Insert a smaller number"<<endl;
            }
        }
        chanceleft--;
        cout<<"\nChances left to guess a number"<<chanceleft<<endl;

        if(chanceleft==0){
            cout<<"\nNo chances left.Better luck next time"<<endl;
            cout<<"\n The number was:"<<randomNumber<<endl;
            cout<<"Thanks for playing Have a nice day";
        }
    }
    cout<<"\n";
    return 0;
}
