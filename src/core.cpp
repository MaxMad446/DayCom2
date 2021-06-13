// Auto-generated module | 2026-05-11T20:18:29.691212
#include <iostream>
#include <vector>

int compute_856() {
    int base = 310;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_856() << std::endl;
    return 0;
}
