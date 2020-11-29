// Auto-generated module | 2026-05-11T19:53:21.312595
#include <iostream>
#include <vector>

int compute_201() {
    int base = 231;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_201() << std::endl;
    return 0;
}
