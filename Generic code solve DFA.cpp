#include<bits/stdc++.h>
using namespace std;
char alpha1, alpha2;
    int DFA[100][2];
    int NumState,fState, initState;

void enter(){
        string lan;
        cout<<"Enter language : "<<endl;
        cin >> lan;
        int point = initState;
        for (int i = 0; i < lan.size(); i++)
        {if (lan[i] == alpha1){point = DFA[point][0];}
        else if (lan[i] == alpha2){point = DFA[point][1];}
        }
        if (point == fState){cout << "accepted ^_^" << endl;}
        else{cout << "rejected :( " << endl;}
}
int main()
{
    cout<<"Enter number of states : ";
    cin >> NumState;
    cout<<"Enter the alpha 1 : ";
    cin >> alpha1;
    cout<<"Enter the alpha 2 : ";
    cin >> alpha2;
    cout<<"Enter initial state : ";
    cin >> initState;
    cout<<"Enter final state : ";
    cin >> fState;
    for (int i = 0; i < NumState; i++)
    {
        int x, y;
        cout<<"Enter transaction if U in state "<<i<<endl;
        cout<<"Enter transaction for alpha "<<alpha1<<endl;
        cin >> x;
        DFA[i][0] = x;
        cout<<"Enter transaction for alpha "<<alpha2<<endl;
        cin >> y;
        DFA[i][1] = y;
    }
    for(;;){
    enter();
    char exit;
        cout<<"to continue press any key except x : ";
        cin>>exit;
        if(exit=='x'){return 0;}
            }
}


