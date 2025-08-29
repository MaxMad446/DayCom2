// Auto-generated module | 2026-05-12T21:28:46.343817
#include <iostream>
#include <vector>

int compute_944() {
    int base = 297;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_944() << std::endl;
    return 0;
}
