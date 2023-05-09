// Auto-generated module | 2026-05-11T21:49:36.191622
#include <iostream>
#include <vector>

int compute_183() {
    int base = 444;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_183() << std::endl;
    return 0;
}
