// Auto-generated module | 2026-05-11T19:29:59.279277
#include <iostream>
#include <vector>

int compute_302() {
    int base = 26;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_302() << std::endl;
    return 0;
}
