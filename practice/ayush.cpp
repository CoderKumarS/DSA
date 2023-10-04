// #include <iostream>
// using namespace std;
// class Element
// {
// public:
//     int value;
//     Element(int val) : value(val) {}
//     Element operator++(int)
//     {
//         value--;
//         return *this;
//     }
// };
// int main()
// {
//     Element obj(121);
//     Element result = obj++;
//     cout << result.value;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// class Custom
// {
// public:
//     int value;
//     Custom(int val) : value(val) {}
//     Custom operator++(int)
//     {
//         Custom temp = *this;
//         value++;
//         return temp;
//     }
// };
// int main()
// {
//     Custom obj(3);
//     Custom result = obj++;
//     cout << result.value;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// class BaseP
// {
// protected:
//     int x;

// public:
//     BaseP() : x(7) {}
// };
// class DerivedQ : private BaseP
// {
// public:
//     int y;
//     DerivedQ() : y(20) {}
// };
// int main()
// {
//     BaseP *ptr = new DerivedQ();
//     cout << ptr->x << ", " << ptr->y;
//     return 0;
// }
// #include <iostream>
// class Base
// {
// public:
//     int x;

// protected:
//     int y;

// private:
//     int z;
// };
// class Derived : public Base
// {
// public:
//     void display() { std::cout << x << " " << y << " " << z; }
// };
// int main()
// {
//     Derived d;
//     d.display();
//     return 0;
// }
// #include <iostream>
// using namespace std;
// class ParentX
// {
// protected:
//     int x;

// public:
//     ParentX() : x(19) {}
// };
// class ChildY : public ParentX
// {
// public:
//     int y;
//     ChildY() : y(20) {}
// };
// int main()
// {
//     ParentX *ptr = new ChildY();
//     cout << ptr->x << ", " << ptr->y;
//     return 0;
// }
