// Auto-generated module | 2026-05-12T21:32:46.306207
#include <iostream>
#include <vector>

int compute_764() {
    int base = 486;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_764() << std::endl;
    return 0;
}
