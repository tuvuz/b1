#include <iostream>

class Tinh {
public:
    int add(int a, int b) {
        return a + b;
    }
};

int main() {
    Tinh tong;

    int A, B;
    std::cin >> A >> B;

    int sum = tong.add(A, B);
    std::cout << sum << std::endl;

    return 0;
}
