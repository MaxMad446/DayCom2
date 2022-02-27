// Auto-generated module | 2026-05-13T22:05:15.543609
#include <iostream>
#include <vector>

int compute_214() {
    int base = 488;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_214() << std::endl;
    return 0;
}
