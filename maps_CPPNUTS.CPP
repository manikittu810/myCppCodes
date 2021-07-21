//notes:-syntax:- 

//0.1:-Topic:-STL:standard template library
// it consists of three components 
// a.container
// b.iterator
// c.Algorithm.

//topic:std::array
//syntax:-std::array<T,N> array;
 //NOTICE:-
 //1.std::array is a container that encapsulates the fixed size arrays.
 //2.array size is needed at compile time.
 //3.assign by value is actually by value.
 //access elements/
 //a.at()
//b.[]
//c.front()
//d.back()
//e.data()//gives access to underlying array.


//program


// #include<bits/stdc++.h>
// #include<iostream>
// #include<array>
// using namespace std;
// int main()
// {
//     //DECLARE
//     std::array<int,5> myarray;
//     //intialization
//     std::array<int,5> myarray1={1,2,3,4,5};//intializer list
//     std::array<int,5> myarray2{1,2,3,4,5};//uniform intialization

//     //assign using using intializer list
//     std::array<int,5> myarray3;
//     myarray3={1,2,3,4,5};
//     // cout<<myarray3.at(4);
//     return 0;
// }

//topic:-std::vector
//notes:-
//1.std::vector is a sequence container and also known as dynamic array or array list.
//2.its size can grow and shrink dynamically and,no need to provide size at compile time.

//ELEMENT ACCESS 
//at(),[],front(),back(),data()

//MODIFIERS
//insert(),emplace(),push_back(),emplace_back(),pop_back(),resize(),swap(),earse(),clear()


//program



// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     //DECLARATIONS
//     vector<int> arr1;
//     vector<int> arr2(5,20);
//     vector<int> arr3={1,2,3,4,5};//intializer list
//     vector<int> arr4 {1,2,3,4,5};//uniform intialization

//     //ACCESSING ELEMENTS

//     arr3[3]=10;
//     arr2.at(3)=10;
//     cout<<arr2.at(3)<<endl;
//     cout<<arr2.front()<<endl;//returns first element of the array
//     cout<<arr3.back()<<endl;//returns last element of the array
//     cout<<arr4.data()<<endl;//return the pointers in the array
//     cout<<arr2.size()<<endl;
//     return 0;

// }

//1map<T1,T2> obj;//where T1  is key type and T2  is value type
//2.std::map is associative container that store elements in a key value combination .
//the key should be unique otherwise it overrrides the previous value.
//3.it is implement using self -balance binary search tree(AVL/RED BALCK TEREE).
//4.it store key value pair in sorted order on the basis of key(ascending/descending).
//5.std::map is generally used in Dictionary type problems.


//TOPIC:-THE BEST WAY TO USE VECTOR IN C++

//PROBLEM with VECTOR ?

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vect;
    for(int i=0;i<32;++i)
    {
        vect.push_back(i);
        cout<<vect.size()<<" "<<vect.capacity()<<endl;
    }
    return 0;
}