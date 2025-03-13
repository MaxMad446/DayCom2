// Auto-generated module | 2026-05-12T04:02:26.042306
#include <iostream>
#include <vector>

int compute_108() {
    int base = 426;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_108() << std::endl;
    return 0;
}
