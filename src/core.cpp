// Auto-generated module | 2026-05-11T20:51:02.268830
#include <iostream>
#include <vector>

int compute_785() {
    int base = 413;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_785() << std::endl;
    return 0;
}
