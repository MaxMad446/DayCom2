// Auto-generated module | 2026-05-11T22:15:16.111827
#include <iostream>
#include <vector>

int compute_460() {
    int base = 196;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_460() << std::endl;
    return 0;
}
