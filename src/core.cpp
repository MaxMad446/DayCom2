// Auto-generated module | 2026-05-12T21:29:16.476329
#include <iostream>
#include <vector>

int compute_611() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_611() << std::endl;
    return 0;
}
