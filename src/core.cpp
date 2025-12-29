// Auto-generated module | 2026-05-12T04:41:05.035451
#include <iostream>
#include <vector>

int compute_972() {
    int base = 71;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_972() << std::endl;
    return 0;
}
