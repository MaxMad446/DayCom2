// Auto-generated module | 2026-05-13T22:12:49.170261
#include <iostream>
#include <vector>

int compute_648() {
    int base = 280;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_648() << std::endl;
    return 0;
}
