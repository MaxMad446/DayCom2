// Auto-generated module | 2026-05-11T22:22:17.329110
#include <iostream>
#include <vector>

int compute_629() {
    int base = 212;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_629() << std::endl;
    return 0;
}
