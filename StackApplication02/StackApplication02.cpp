#include <iostream>
#include <stack>
#include <deque>
#include <list>
#include <vector>
using namespace std;


int main() {
	int a1[] = { 1,2,3,4,5,6,7,8,9,10 };
	
	//1. Not allowed - iterator constructor - z iteratorjem ne moremo inicializirat stacka, tak constructor ne obstaja
	//najprej moramo napolnit fundament, nato pa fundament podat kot param construcotrju stacka
	stack<int> s1(a1, a1 + 10);

	//2. Not allowed - copy constructor source and target stack object using      
    // different storage containers
	//s1 bazira na deque, mi pa zelimo kreirati stack s fundamentom vector<> - to pa ne gre
	stack<int, vector <int> > s2(s1);


	//3. Not allowed - initialization using predefined container – using different storage object than declared
	deque <int> d1(a1, a1 + 10);

	//d1 bi moral biti tipa vector in ne deque, ker smo v templateu navedli da za fundament zelimo vector
	//in ne deque
	stack<int, vector <int> > s3(d1);	

	return 0;
}