// Auto-generated module | 2026-05-11T21:23:45.004881
#include <iostream>
#include <vector>

int compute_712() {
    int base = 86;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_712() << std::endl;
    return 0;
}
