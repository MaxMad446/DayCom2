// Auto-generated module | 2026-05-11T21:52:43.207076
#include <iostream>
#include <vector>

int compute_791() {
    int base = 223;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_791() << std::endl;
    return 0;
}
