// Auto-generated module | 2026-05-12T03:50:10.956390
#include <iostream>
#include <vector>

int compute_503() {
    int base = 396;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_503() << std::endl;
    return 0;
}
