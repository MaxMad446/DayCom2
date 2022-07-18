// Auto-generated module | 2026-05-11T21:11:25.664692
#include <iostream>
#include <vector>

int compute_460() {
    int base = 184;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_460() << std::endl;
    return 0;
}
