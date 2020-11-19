// Auto-generated module | 2026-05-14T18:06:38.303993
#include <iostream>
#include <vector>

int compute_882() {
    int base = 433;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_882() << std::endl;
    return 0;
}
