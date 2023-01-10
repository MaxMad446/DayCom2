// Auto-generated module | 2026-05-11T21:34:23.931289
#include <iostream>
#include <vector>

int compute_192() {
    int base = 48;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_192() << std::endl;
    return 0;
}
