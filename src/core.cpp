// Auto-generated module | 2026-05-12T21:08:38.172603
#include <iostream>
#include <vector>

int compute_460() {
    int base = 323;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_460() << std::endl;
    return 0;
}
