#include <bits/stdc++.h>
using namespace std;

// sort()  -> sorting in NlogN (Array , Vector )
// sets -> all the elements in a set will be unique
// maps / dictionary -> key=>value (for every key , there will be a unique value) 

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("ouput.txt","w",stdout);
	#endif


	// //sort
	// int arr[] = {1,4,7887,42,0,-100,6,7,8,22233,44} ; 
	// int n = 11 ; 

	// sort(arr,arr+n) ; //(starting location , ending location ) / ascending

	// for (int i = 0; i < n; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }

	// cout<<endl;

	// sort(arr,arr+n,greater<int>()) ; 

	// for (int i = 0; i < n; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }


	// cout<<endl;


	// vector<int> v ; 

	// for (int i = 0; i < n; ++i)
	// {
	// 	v.push_back(arr[i]) ; 
	// }

	// sort(v.begin(),v.end());

	// for (int i = 0; i < n; ++i)
	// {
	// 	cout<<v[i]<<" ";
	// }

	// cout<<endl ; 

	// sort(v.begin(),v.end(),greater<int>());


	// for (int i = 0; i < n; ++i)
	// {
	// 	cout<<v[i]<<" ";
	// }

	// cout<<endl ; 



// sets -> 1) ordered set -> the set will be sorted O(logN)
	// 	-> 2) unordered set -> the set will be not sorted O(1)

// unordered_set<int> s1 ; 
// set<int> s2 ; 	

// int arr1[] = {1,2,3,3,3,3,4,4,4,4,6,6,6,6,5,5,5,5,5} ; 
// int n = 19 ; 

// for(int i=0;i<n;i++){
// 	s1.insert(arr1[i]) ; 
// }
// 	//s1 - > {1,2,3,4,5,6}

// //searching or finding in a set

// int target = 5 ; 
// // if the element is found then it will return an iterator to that element in the set
// //if the element is not found , then it will return s.end()
// if(s1.find(target) == s1.end() ){
// 	cout<<"NOT IN THE ARRAY !";
// }
// else{
// 	cout<<"IT IS PRESENT";
// }


//Maps ->  unordered_map and ordered map
//key value

map<int , int> m ; 

unordered_map<char , int> maps ;

string s = "roshni sahriii" ; 

for (int i = 0; i < s.size() ; ++i)
{
		char current_char = s[i] ; 

		if(maps.find(current_char)==maps.end()){
			maps[current_char] = 1 ; 
		}else{
			maps[current_char] += 1  ;
		}
}


// for (int i = 0; i < s.size() ; ++i)
// {
// 	cout<<maps[s[i]] << " ";

// }

// cout<<endl; 


for( auto map_pair : maps ){
	char key = map_pair.first ; 
	int value  = map_pair.second ; 

	cout<< key<<" frequency "<< value <<endl ;
}







  return 0;
}