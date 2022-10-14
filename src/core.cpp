// Auto-generated module | 2026-05-11T21:22:50.624192
#include <iostream>
#include <vector>

int compute_231() {
    int base = 175;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_231() << std::endl;
    return 0;
}
