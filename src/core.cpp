// Auto-generated module | 2026-05-14T18:04:34.564213
#include <iostream>
#include <vector>

int compute_348() {
    int base = 45;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_348() << std::endl;
    return 0;
}
