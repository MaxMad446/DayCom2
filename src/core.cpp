// Auto-generated module | 2026-05-11T19:49:32.213264
#include <iostream>
#include <vector>

int compute_441() {
    int base = 265;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_441() << std::endl;
    return 0;
}
