// Auto-generated module | 2026-05-11T22:11:58.446214
#include <iostream>
#include <vector>

int compute_348() {
    int base = 111;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_348() << std::endl;
    return 0;
}
