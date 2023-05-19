// Auto-generated module | 2026-05-11T21:50:59.857522
#include <iostream>
#include <vector>

int compute_301() {
    int base = 348;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_301() << std::endl;
    return 0;
}
