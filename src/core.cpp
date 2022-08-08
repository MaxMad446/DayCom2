// Auto-generated module | 2026-05-14T06:16:37.144149
#include <iostream>
#include <vector>

int compute_120() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_120() << std::endl;
    return 0;
}
