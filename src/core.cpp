// Auto-generated module | 2026-05-11T21:19:37.819739
#include <iostream>
#include <vector>

int compute_888() {
    int base = 124;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_888() << std::endl;
    return 0;
}
