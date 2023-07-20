// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// void print(int age){
//     cout << "my name is kunal gaurav and my age is " << age << endl;
// }
  
// int main(){
//  print(21);
// return 0;
// }



//pair

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
  
// int main(){
//   pair<int ,int> a = {4 ,46};



//   cout <<"The first child of a is " << a.first << endl;
//   cout << "The second child of a is " << a .second << endl;


//   pair <int , pair<int , int >> p = {2 , {3,5}};

//   cout << "p's first" << p.first << endl;
//   //cout << "p's second" << p.second << endl;
//   cout << "p's second first " << p.second.first << endl;
//   cout << "p's second second " << p.second.second << endl;


//   pair<int , int> arr[] = { { 1,2}, {3,4}, {5,6} , {7,8}, {9,10} };

//   cout << " 4th admi ka phle bacha " <<arr[3].first << endl;
//   cout << "3rd admi ka dusra bacha " << arr[2].second << endl;
// return 0;
// }


//vector


#include<iostream>
#include<vector>
using namespace std;
  
int main(){
 cout<< "kunal gaurav"<< endl;

 unsigned int a = 9;

  vector<int> v;

  v.push_back(1);
  v.emplace_back(2);

  for(int i=0; i<v.size(); i++){
    cout<<v[i] << " "<<endl;
  }

  vector<int> v3(5);

  vector<int> v1(5, 10);
  v1.push_back(15);                           
  v1.emplace_back(23);

  for(int i=0; i<v1.size(); i++){
    cout<<v1[i] << " ";
  }
  


return 0;
}