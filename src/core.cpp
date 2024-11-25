// Auto-generated module | 2026-05-12T03:47:59.557695
#include <iostream>
#include <vector>

int compute_305() {
    int base = 31;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_305() << std::endl;
    return 0;
}
