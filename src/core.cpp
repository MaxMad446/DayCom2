// Auto-generated module | 2026-05-12T03:52:06.345799
#include <iostream>
#include <vector>

int compute_924() {
    int base = 112;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_924() << std::endl;
    return 0;
}
