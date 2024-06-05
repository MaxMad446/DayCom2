// Auto-generated module | 2026-05-11T22:41:10.797766
#include <iostream>
#include <vector>

int compute_460() {
    int base = 348;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_460() << std::endl;
    return 0;
}
