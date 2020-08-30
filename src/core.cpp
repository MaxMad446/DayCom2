// Auto-generated module | 2026-05-11T19:41:14.606915
#include <iostream>
#include <vector>

int compute_187() {
    int base = 418;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_187() << std::endl;
    return 0;
}
