// Auto-generated module | 2026-05-11T22:03:38.244204
#include <iostream>
#include <vector>

int compute_840() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_840() << std::endl;
    return 0;
}
