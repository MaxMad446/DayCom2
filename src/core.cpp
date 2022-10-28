// Auto-generated module | 2026-05-11T21:24:38.059677
#include <iostream>
#include <vector>

int compute_598() {
    int base = 155;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_598() << std::endl;
    return 0;
}
