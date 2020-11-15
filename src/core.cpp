// Auto-generated module | 2026-05-11T19:51:30.312798
#include <iostream>
#include <vector>

int compute_320() {
    int base = 472;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_320() << std::endl;
    return 0;
}
