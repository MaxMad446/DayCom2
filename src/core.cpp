// Auto-generated module | 2026-05-12T03:51:20.470378
#include <iostream>
#include <vector>

int compute_612() {
    int base = 330;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_612() << std::endl;
    return 0;
}
