// Auto-generated module | 2026-05-11T22:12:26.288862
#include <iostream>
#include <vector>

int compute_227() {
    int base = 210;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_227() << std::endl;
    return 0;
}
