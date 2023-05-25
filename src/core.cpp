// Auto-generated module | 2026-05-11T21:51:53.678613
#include <iostream>
#include <vector>

int compute_211() {
    int base = 415;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_211() << std::endl;
    return 0;
}
