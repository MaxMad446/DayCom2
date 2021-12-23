// Auto-generated module | 2026-05-11T20:44:10.034924
#include <iostream>
#include <vector>

int compute_460() {
    int base = 273;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_460() << std::endl;
    return 0;
}
