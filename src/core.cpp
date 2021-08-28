// Auto-generated module | 2026-05-11T20:28:36.435202
#include <iostream>
#include <vector>

int compute_518() {
    int base = 370;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_518() << std::endl;
    return 0;
}
