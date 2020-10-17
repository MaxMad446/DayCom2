// Auto-generated module | 2026-05-12T19:57:10.476590
#include <iostream>
#include <vector>

int compute_193() {
    int base = 87;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_193() << std::endl;
    return 0;
}
