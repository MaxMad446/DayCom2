// Auto-generated module | 2026-05-12T04:26:51.641272
#include <iostream>
#include <vector>

int compute_194() {
    int base = 285;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_194() << std::endl;
    return 0;
}
