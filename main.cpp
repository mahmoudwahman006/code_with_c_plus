#include <iostream>
#include<string>
#include<bits/stdc++.h> // include many libraries of data structure
#include<utility>
#include<vector>
using namespace std;

int main()
{
   /*
    auto x = 5;   // int
    auto v = 10.55;  // double
    auto a = "jun";  // string  ..... etc
   */


  /*
    pair<int , int > p(9,7);
    pair<int , int > p;
    p.first=5;
    p.second=6;
    cout<<p.first<<"  "<<p.second;
    pair < string , pair<int,int> > data;
    cout << "Enter name: ";
    cin >> data.first;
    cout << "Enter age: ";
    cin >> data.second.first;
    cout << "Enter sale: ";
    cin >> data.second.second;
    */


    vector<int> v; //empty
    vector <int> v2(5); //with size 5 can be changed
    vector <int> v3(5,0); // default value for all elements 0
     // how to out or in elements  ::
     // 1- out default values
     for (int i=0;i<5;i++){
        cout<<v3[i]<<endl;}
     // 2- in default values
     for (int i=0;i<5;i++){
        cin>>v3[i];}
     // 3- out new values
     for (int i=0;i<5;i++){
        cout<<v3[i]<<endl;}
    // how to add values after fill the vector :
    v3.push_back(5); // complex of push back is o(1) .
     out new values
    for (int i=0;i<6;i++){ // note that the size change to 6 and capacity is 10 .
        cout<<v3[i]<<endl;}
     // note that when we add a new element we have double the size now size is 10
    // make a new vector with double size and move all elements in the new one .
     v3.pop_back(); // complex o(1).
     // delete the last element;
    v3.size(); // the size of the vector.
    // iterators :
    v3.begin(); // iterator that in the first element .
    v3.end();// iterator that in the first element after the end .
    v3.rbegin();// iterator that in zero element (element before the first one )
    v3.rend();//iterator that in the last element .
    // how to sort use iterators :
    sort(v3.begin(),v3.end());// from small to big
    for (int i=0;i<6;i++){
        cout<<v3[i]<<endl;}
    // how to sort with ops use iterators :
    sort(v3.rbegin(),v3.rend()); // from big to small // note the complex is o(n log n )
    for (int i=0;i<6;i++){
        cout<<v3[i]<<endl;}
    // note insert function take complex o(n).
    v3.insert(2+v3.begin(),5);// 2 : is the position , 5 : is a value .
    for (int i=0;i<6;i++){
        cout<<v3[i]<<endl;}
     // note erase function = delete  element
      v3.erase(3 + v3.begin()); // 3 : is position of the element .
      v3.clear();// delete all elements ;


    return 0;
}
