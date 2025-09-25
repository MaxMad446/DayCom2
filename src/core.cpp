// Auto-generated module | 2026-05-12T04:28:17.945609
#include <iostream>
#include <vector>

int compute_612() {
    int base = 372;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_612() << std::endl;
    return 0;
}
