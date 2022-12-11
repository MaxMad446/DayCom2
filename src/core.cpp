// Auto-generated module | 2026-05-14T06:27:05.134280
#include <iostream>
#include <vector>

int compute_957() {
    int base = 190;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_957() << std::endl;
    return 0;
}
