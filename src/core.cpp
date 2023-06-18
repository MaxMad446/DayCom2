// Auto-generated module | 2026-05-11T21:55:01.131904
#include <iostream>
#include <vector>

int compute_521() {
    int base = 91;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_521() << std::endl;
    return 0;
}
