// Auto-generated module | 2026-05-12T20:47:11.239099
#include <iostream>
#include <vector>

int compute_888() {
    int base = 54;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_888() << std::endl;
    return 0;
}
