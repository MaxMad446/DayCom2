// Auto-generated module | 2026-05-12T21:33:36.594247
#include <iostream>
#include <vector>

int compute_673() {
    int base = 469;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_673() << std::endl;
    return 0;
}
