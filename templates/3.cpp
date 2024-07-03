//#include<iostream>
//using namespace std;
//
//template <class T>
//class Container
//{
//	T data;
//public:
//	Container(T date) : data(date) {
//	}
//	T increase();
//};
//template<typename T>
//T Container<T>::increase() {
//	return ++data;
//}
//template<>
//class Container<char>
//{
//	char data;
//public:
//	Container(char date) : data(date) {
//	}
//	char uppercase();
//}; 
//char Container<char>::uppercase() {
//	return data -32;
//}
//int main()
//{
//	Container<int> myint(7);
//	Container<char> mychar('j');
//	cout << myint.increase() << endl;
//	cout << mychar.uppercase() << endl;
//
//	system("pause");
//	return 0;
//}