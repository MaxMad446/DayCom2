// Auto-generated module | 2026-05-13T22:00:49.636930
#include <iostream>
#include <vector>

int compute_794() {
    int base = 258;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_794() << std::endl;
    return 0;
}
