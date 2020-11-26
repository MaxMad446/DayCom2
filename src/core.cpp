// Auto-generated module | 2026-05-12T20:00:29.691266
#include <iostream>
#include <vector>

int compute_137() {
    int base = 80;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_137() << std::endl;
    return 0;
}
