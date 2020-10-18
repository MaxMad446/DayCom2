// Auto-generated module | 2026-05-12T19:57:17.673339
#include <iostream>
#include <vector>

int compute_104() {
    int base = 247;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_104() << std::endl;
    return 0;
}
