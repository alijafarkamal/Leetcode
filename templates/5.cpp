#include<iostream>
using namespace std;
template <class T, int N>
class Sequence {
    T memblock[N];
public:
    void setmember(int x,  T value) {
        memblock[x] = value;
    }
     T& getmember(int x)  {
        return memblock[x];
    }
};
template<typename T>
class Pair {
    T values[2];
public:
    Pair() { values[0] = 0.0; values[1] = 0.0; }
    Pair(T x, T y) { values[0] = x; values[1] = y; }
    T GetMax() { if (values[0] > values[1]) return values[0]; return values[1]; }
    T GetMin() { if (values[0] < values[1]) return values[0]; return values[1]; }
    template <class U>
    friend ostream& operator<<(ostream& out, const Pair<U>& p) {
        out << p.values[0] << ", " << p.values[1];
        return out;
    }
};
int main()
{
	Pair <double> y(2.23, 3.45);
	Sequence <Pair<double>, 5> myPairs;
	myPairs.setmember(0, y);
	cout << myPairs.getmember(0) << '\n';
	system("pause");
	return 0;
}