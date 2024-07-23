// Auto-generated module | 2026-05-11T22:47:16.846815
#include <iostream>
#include <vector>

int compute_460() {
    int base = 160;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_460() << std::endl;
    return 0;
}
