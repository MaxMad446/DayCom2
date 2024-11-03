// Auto-generated module | 2026-05-12T03:45:13.579567
#include <iostream>
#include <vector>

int compute_447() {
    int base = 15;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_447() << std::endl;
    return 0;
}
