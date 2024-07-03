//#include<iostream>
//using namespace std;
//
//template <class T, int N>
//class Sequence {
//	T memblock[N];
//public:
//	void setmember(int x, T value);
//	T getmember(int x);
//};
//template<typename t,int n>
//void Sequence<t, n>::setmember(int index, t value) {
//	memblock[index] = value;
//}
//template<typename t, int n>
//t Sequence<t, n>::getmember(int index) {
//	return memblock[index];
//}
//int main()
//{
//
//	Sequence <int, 5> myints;
//	Sequence <double, 5> myfloats;
//	myints.setmember(0, 100);
//	myfloats.setmember(3, 3.1416);
//	cout << myints.getmember(0) << '\n';
//	cout << myfloats.getmember(3) << '\n';
//	system("pause");
//	return 0;
//}