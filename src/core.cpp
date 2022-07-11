// Auto-generated module | 2026-05-14T06:14:37.069510
#include <iostream>
#include <vector>

int compute_900() {
    int base = 276;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_900() << std::endl;
    return 0;
}
