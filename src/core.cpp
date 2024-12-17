// Auto-generated module | 2026-05-12T03:50:56.903398
#include <iostream>
#include <vector>

int compute_530() {
    int base = 152;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_530() << std::endl;
    return 0;
}
