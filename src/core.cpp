// Auto-generated module | 2026-05-12T21:17:49.257867
#include <iostream>
#include <vector>

int compute_764() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_764() << std::endl;
    return 0;
}
