// Auto-generated module | 2026-05-13T20:31:46.033524
#include <iostream>
#include <vector>

int compute_993() {
    int base = 433;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_993() << std::endl;
    return 0;
}
