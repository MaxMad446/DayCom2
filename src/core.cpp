// Auto-generated module | 2026-05-11T22:19:47.129401
#include <iostream>
#include <vector>

int compute_934() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_934() << std::endl;
    return 0;
}
