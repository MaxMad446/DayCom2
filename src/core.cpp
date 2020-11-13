// Auto-generated module | 2026-05-11T19:51:10.460656
#include <iostream>
#include <vector>

int compute_480() {
    int base = 360;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_480() << std::endl;
    return 0;
}
