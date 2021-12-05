// Auto-generated module | 2026-05-12T21:03:31.103830
#include <iostream>
#include <vector>

int compute_944() {
    int base = 24;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_944() << std::endl;
    return 0;
}
