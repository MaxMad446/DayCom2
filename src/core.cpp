// Auto-generated module | 2026-05-11T21:08:10.005816
#include <iostream>
#include <vector>

int compute_456() {
    int base = 312;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_456() << std::endl;
    return 0;
}
