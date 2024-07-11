/*
    clear && g++ -std=c++11 -o valueIfExist valueIfExist.cpp && ./valueIfExist
*/

/*

string  ->  
if (name.find("Z") != string::npos){
    cout<<"SUB STRING FOUND"<<endl;
}

vector  ->  
if (find(myVector.begin(), myVector.end(), 'a') != myVector.end()) {
    cout << "ELEMENT EXIST" << endl;
}

hashmap -> 
if(myMap.find("USA") != myMap.end()){
    cout<<"USA EXIST"<<endl;
}

*/

/*************************
Sequence containers:
array	
vector	
deque	
forward_list	
list
---------------------------
Associative containers:
unordered_set
unordered_multiset
unordered_map
unordered_multimap
set
multiset
map
multimap
**************************/

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main(){

    cout<<"PROGRAM STARTED....."<<endl;

    cout<<endl;

    /********** unordered_map **********/

    unordered_map <string,int> myMap;

    myMap["USA"]        = 1;
    myMap["CANADA"]     = 2;
    myMap["INDIA"]      = 3;
    myMap["CHINA"]      = 4;
    myMap["BANGLADESH"] = 5;

    // CHECK IF A VALUE EXIST IN A HASHMAP
    if(myMap.find("USA") != myMap.end()){
        cout<<"USA EXIST"<<endl;
    }else{ 
        cout<<"-----NOT AVAILABLE-----"<<endl;
    }

    cout<<endl;

    // ITERATE HASHMAP
    for (auto it = myMap.begin(); it != myMap.end(); it++) {
        cout << "KEY   -> " << it->first <<endl;
        cout << "VALUE -> " << it->second<<endl;
        cout<<endl;
    }

    /********** VECTOR **********/

    vector<char>myVector;

    for(int i=0;i<5;i++){
        myVector.push_back('a');
    }

    if (find(myVector.begin(), myVector.end(), 'a') != myVector.end()) {
        cout << "ELEMENT EXIST" << endl;
    } else {
        cout << "ELEMENT DOES NOT EXIST" << endl;
    }

    for (int i=0;i<myVector.size();i++){
        cout<<myVector.at(i)<<endl;
    }

    cout<<endl;

    /********** STRING **********/

    string name = "SEEAM";
    if (name.find("Z") != string::npos){
        cout<<"SUB STRING FOUND"<<endl;
    }else{
        cout<<"-----NOT AVAILABLE-----"<<endl;
    }


    vector<char> myVector = {'a','e','i','o','i','u'};
    
    auto it = find(myVector.begin()+3,myVector.end(),'i');
    
    if (it != myVector.end()){
        int distance = (it - myVector.begin());
        cout<<distance<<endl;
    }else if (it == myVector.end()){
        cout<<"ELEMENT NOT AVAILABLE"<<endl;
    }

    return 0;
}



