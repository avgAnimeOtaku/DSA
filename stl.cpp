
1
#include<bits/stdc++.h>//include all header files

2
using namespace std;//all standard functions in this pa, cout, cin etc.

3
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int val = 10;
	double val = 20.0;
	cout<<val<<endl;//throw an error, same variable using 2 different datatypes, to overcome namespace is used
	return 0;
}

4
#include<bits/stdc++.h>
using namespace std;
namespace raj
{
	int val = 50;
	int func()
	{
		return val*10;
	}
}
int main()
{
	int val = 10;
	cout<<val<<endl;//prints 10
	cout<<raj::val<<endl;//prints 50
	std::cout<<val<<endl;//print 10 without writing "using namespace std;"
	cout<<raj::func()<<endl;//prints 500
	return 0;
}

5
#include<bits/stdc++.h>
using namespace std;
struct node//default public
{
	int num;
	string str;
	double dub;
	char x;
	node(int num, string str, double dub, char x)//constructor
	{
		this.num = num;
		this.str = str;
		this.dub = dub;
		this.x = x;
	}
};
int main()
{
	//wrong way
	node n;
	n.num = 19;
	n.str = "ikhberf";
	n.dub = 21.0;
	n.x = 'r';
	
	//correct way
	node n = new node(19, "ihbwrfb", 21.0, 'r');
	return 0;
}

6
//array container
#include<bits/stdc++.h>
using namespace std;
array<int, 3> arr;//outside int main/global, initial value will be 0 = {0,0,0}
int main()
{
	array<int, 3> a;//inside int main, initial value will be garbage value = {?,?,?}
	array<int, 5> a = {1,5,6}; // value of non-initialize value is 0 {1,5,6,0,0}
	array<int, 5> a = {0}; // = {0,0,0,0,0}
	int a[5] = {0}; // = {0,0,0,0,0}
	array<int, 5> a = {1}; // = {1,0,0,0,0}
	//fill()
	array<int, 5> a;
	a.fill(1); // = {1,1,1,1,1}
	//at(index)
	array<int, 5> a = {1,2,3,4,5};
	for(int i=0;i<5;i++)
		cout<<a.at(i)<<" ";
	// 1 2 3 4 5
	return 0;
}

7
//fill()
#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	array<int, 5> a;
	a.fill(1); // = {1,1,1,1,1}
	return 0;
}

8
//at(index)
#include<bits/stdc++.h>
using namespace std;
int main()
{
	array<int, 5> a = {1,2,3,4,5};
	for(int i=0;i<5;i++)
		cout<<a.at(i)<<" ";// 1 2 3 4 5
	return 0;
}

9
//iterators
#include<bits/stdc++.h>
using namespace std;
int main()
{
	array<int, 5> a = {1,2,3,4,5};
	//begin() = 1 / first element
	//rbegin() = 5 / last element
	//end() = garbage value after 5 / right after the last element
	//rend() = garbage value before 1 / right before the first element
	return 0;
}

10
//auto
#include<bits/stdc++.h>
using namespace std;
int main()
{
	array<int, 5> arr = {1,2,3,4,5};
	for(auto it = arr.begin(); it!=arr.end();it++)
	{
		cout << *it << " "; 
	}
	for(auto it =  arr.rbegin();it>arr.rend();it++)
	{
		cout << *it << " "; 
	}
	for(auto it =  arr.end() - 1;it>=arr.begin();it--)
	{
		cout << *it << " "; 
	}
	// for each loop 
	for(auto it : arr)
	{
		cout << it << " "; 
	}
	string s = "xhegcwe"; 
	for(auto c:s) {
		cout << c << " "; 
	}
	return 0;
}

11
#include<bits/stdc++.h>
using namespace std;
int main()
{
	array<int, 5> arr = {1,2,3,4,5};
	// size 
	cout << arr.size(); 
	// front 
	cout << arr.front(); // arr.at(0);
	// back
	cout << arr.back(); // arr.at(arr.size() - 1);
	return 0;
}

12
//array size
#include<bits/stdc++.h>
using namespace std;
int arr[10000000];// max size of 10^7 -> int, double, char 
bool arr[100000000];// max size of 10^8 -> bool 
int main()
{
	int arr[1000000];// max size of 10^6 -> int, double, char 
	bool arr[10000000];// max size of 10^7 -> bool
	return 0;
}

13
//vector
#include<bits/stdc++.h>
using namespace std;
vector<int> a1;
a1.push_back();// segmentation fault if you push_back 10^7 times
int main()
{
	vector<int> arr; // -> {}
	arr.push_back();// segmentation fault if you push_back 10^6 times
	cout << arr.size() << endl; // -> print 0 
	//push_back
	arr.push_back(0); // {0}
	arr.push_back(2); // {0,2}
	cout << arr.size() << endl; // -> print 2
	//pop_back()
	arr.pop_back();//{0}
	cout << arr.size() << endl;// print 1  
	arr.push_back(0);//{0,0}
	arr.push_back(2);//{0,0,2}
	//clear()
	vec.clear(); // --> erase all elements at once {}

	vector<int> vec1(4, 0); // -> {0,0,0,0}
	vector<int> vec2(4, 10); // -> {10,10,10,10}
 
	// copy the entire vec2 into vec3
	vector<int> vec3(vec2.begin(), vec2.end()); // -> [)
	vector<int> vec3(vec2); 
 
	// raj.emplace_back(1); // emplace_back takes lesser time than push_back
 
	vector<int> raj;
	raj.push_back(1);  
	raj.push_back(3); 
	raj.push_back(2); 
	raj.push_back(5); // -> {1, 3, 2, 5} 
	vector<int> raj1(raj.begin(), raj.begin() + 2);  // -> {1, 3}  

	//2D vector
 
	vector<vector<int>> vec; 
 
	vector<int> raj1;
	raj1.push_back(1); 
	raj1.push_back(2); 
 
	vector<int> raj2;
	raj2.push_back(10); 
	raj2.push_back(20); 
 
	vector<int> raj3;
	raj3.push_back(19); 
	raj3.push_back(24); 
	raj3.push_back(27); 
 
	vec.push_back(raj1); 
	vec.push_back(raj2); 
	vec.push_back(raj3); 
 
	// it is vector itself
	for(auto vctr: vec)
	{
		for(auto it: vctr)
		{
			cout << it << " "; 
		}
		cout << endl; 
	}
	for(int i = 0;i<vec.size();i++)
	{
		for(int j = 0;j<vec[i].size();j++)
		{
			cout <<  vec[i][j] << " "; 
		}
		cout << endl; 
	}
 
	// define 10 x 20 
	vector<vector<int>> vec(10, vector<int>(20, 0)); 
	vec.push_back(vector<int>(20, 0)); 
	cout << vec.size() << endl; // 11 prints
 
	vec[2].push_back(1); 
 
 
	//array of vector
	vector<int> arr[4]; 
	arr[1].push_back(0); 
 
 
	// 10 x 20 x 30 // int arr[10][20][30] 
	vector<vector<vector<int>>> vec(10, vector<vector<int>>(20, vector<int>(30)));
	return 0;
}

14
//sets
#include<bits/stdc++.h>
using namespace std;
int main()
{
	//stores in linear assending manner
	// given n elements, tell me the number of unique elements 
	//arr[] = {2, 5, 2, 1, 5, 4} // 3 unique elements -> {1, 2, 4, 5}
	set<int> st; 
	int n;
	cin >> n;
	for(int i = 0;i<n;i++)
	{
		int x;
		cin >> x; 
		st.insert(x);//complexity = log(N) 
	}
	// st -> {1, 2, 4, 5}
	//st[0] won't work
	//st.begin() st.end() etc. will work

	//size()
	cout << st.size();//4
	
	// erase functionality 
	// log n
	st.erase(st.begin()); // st.erase(iterator) // st -> {2, 4, 5}
	// log n
	st.erase(st.begin(), st.begin() + 2); // -> [) //{5}
	// st.erase(startIterator, endIterator) 
	st.erase(5) // st.erase(key) // delete the 5 -> {1, 2, 4}

	set<int> st = {1, 5, 7, 8};
	set<int> set1(st.begin , st.end());
	set<int> set2(st);

	set<int> st = {1, 5, 7, 8}; 
	auto it = st.find(7); // log n // it will be iterator to 7
	auto it = st.find(9); // it = st.end(); 
	st.emplace(6); // st.insert(6) but faster

	set<node> n;//from points number 5
	
	set<int> st; 
	st.insert(5); // -> {5}
	st.insert(5); // -> {5}
 
	for(auto it=st.begin(); it!=st.end();it++) {
		cout << *it << " "; 
	}
 
	for(auto it : st) {
		cout << it << endl; 
	}
 
	// delete the entire set 
	st.erase(st.begin(), st.end()); // makes sure the entire set is deleted 
 
	//unordered_set
	unordered_set<int> st; 
	st.insert(2); 
	st.insert(3);
	st.insert(1); 
	//can be in any order, {1,2,3} or {2,3,1} etc.
	// average time complexity is O(1) 
	// tle -> switch to set 
	// but the worst case is linear in nature, O(set size)
	return 0;
}
