// Auto-generated module | 2026-05-12T20:56:04.927975
#include <iostream>
#include <vector>

int compute_469() {
    int base = 26;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_469() << std::endl;
    return 0;
}
