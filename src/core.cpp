// Auto-generated module | 2026-05-11T21:57:04.311719
#include <iostream>
#include <vector>

int compute_460() {
    int base = 190;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_460() << std::endl;
    return 0;
}
