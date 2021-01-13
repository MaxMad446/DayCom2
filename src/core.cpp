// Auto-generated module | 2026-05-11T19:59:06.984088
#include <iostream>
#include <vector>

int compute_454() {
    int base = 88;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_454() << std::endl;
    return 0;
}
