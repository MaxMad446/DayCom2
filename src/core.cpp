// Auto-generated module | 2026-05-11T19:52:50.977770
#include <iostream>
#include <vector>

int compute_188() {
    int base = 149;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_188() << std::endl;
    return 0;
}
