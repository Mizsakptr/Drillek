#include <iostream>
#include <string>
#include <vector>

template<typename T>
struct S {
    explicit S(T vv = 0) : val{vv} { }

    S& operator=(const T&);

    T& get();
    const T& get() const;

private:
    T val;
};

template<typename T>
T& S<T>::get()
{
    return val;
}

template<typename T>
const T& S<T>::get() const
{
    return val;
}

template<typename T>
S<T>& S<T>::operator=(const T& s)
{
    val = s;
    return *this;
}

template<typename T>
std::ostream& operator<<(std::ostream& os, std::vector<T>& v)
{
    os << "{";
    for (int i = 0; i < v.size(); ++i) {
        os << v[i] << (i < v.size() - 1 ? ", " : " ");
    }
    os << "}";

    return os;
}

template<typename T>
std::istream& operator>>(std::istream& is, std::vector<T>& v)
{
    char ch = 0;
    is >> ch;
    if (ch != '{') {
        is.unget();
        return is;
    }

    for (T val; is >> val; ) {
        v.push_back(val);
        is >> ch;
        if (ch != ',') break;
    }

    return is;
}

template<typename T> void read_val(T& v)
{
    std::cin >> v;
}

int main()
{
    S<int> si {1000};
    S<char> sc {'s'};
    S<double> sd {10.2};
    S<std::string> s {"String"};
    S<std::vector<int>> svi { std::vector<int>{10, 20, 30, 40, 50, 60, 70, 80, 90, 100}};

    std::cout << "S<int>: " << si.get() << std::endl;
    std::cout << "S<char>: " << sc.get() << std::endl;
    std::cout << "S<double>: " << sd.get() << std::endl;
    std::cout << "S<string>: " << s.get() << std::endl;
    std::cout << "S<vector<int>>: " << svi.get() << std::endl;;


    sd = 1010.2;
    std::cout << "S<double> : " << sd.get() << std::endl;

    std::cout << std::endl;


    std::cout << "Vector<int>: Enter values in the following format: { val1, val2, val3 }" << std::endl;
    //std::cout << "(brackets and commas)" << std::endl;
    std::vector<int> vi2;
    read_val(vi2);
    S<std::vector<int>> svi2 {vi2};

    std::cout << "S<vector<int>> read vector printed: " << svi2.get() << '\n';
    return 0;
}
