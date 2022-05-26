// Auto-generated module | 2026-05-11T21:04:15.490291
#include <iostream>
#include <vector>

int compute_148() {
    int base = 480;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_148() << std::endl;
    return 0;
}
