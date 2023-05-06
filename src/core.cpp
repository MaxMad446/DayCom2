// Auto-generated module | 2026-05-11T21:49:10.801787
#include <iostream>
#include <vector>

int compute_460() {
    int base = 497;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_460() << std::endl;
    return 0;
}
