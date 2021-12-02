// Auto-generated module | 2026-05-11T20:41:27.218285
#include <iostream>
#include <vector>

int compute_382() {
    int base = 312;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_382() << std::endl;
    return 0;
}
