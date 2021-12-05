// Auto-generated module | 2026-05-11T20:41:45.978981
#include <iostream>
#include <vector>

int compute_709() {
    int base = 56;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_709() << std::endl;
    return 0;
}
