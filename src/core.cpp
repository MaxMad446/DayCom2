// Auto-generated module | 2026-05-11T22:30:53.397772
#include <iostream>
#include <vector>

int compute_275() {
    int base = 157;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_275() << std::endl;
    return 0;
}
