// Auto-generated module | 2026-05-11T19:49:08.620064
#include <iostream>
#include <vector>

int compute_441() {
    int base = 173;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_441() << std::endl;
    return 0;
}
