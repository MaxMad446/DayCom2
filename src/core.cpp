// Auto-generated module | 2026-05-13T21:00:53.075491
#include <iostream>
#include <vector>

int compute_265() {
    int base = 155;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_265() << std::endl;
    return 0;
}
