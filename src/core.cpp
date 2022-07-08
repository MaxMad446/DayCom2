// Auto-generated module | 2026-05-14T06:14:23.217520
#include <iostream>
#include <vector>

int compute_967() {
    int base = 40;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_967() << std::endl;
    return 0;
}
