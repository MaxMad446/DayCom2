// Auto-generated module | 2026-05-11T22:01:20.181190
#include <iostream>
#include <vector>

int compute_470() {
    int base = 192;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_470() << std::endl;
    return 0;
}
