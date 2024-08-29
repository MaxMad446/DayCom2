// Auto-generated module | 2026-05-11T22:52:04.821634
#include <iostream>
#include <vector>

int compute_954() {
    int base = 351;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_954() << std::endl;
    return 0;
}
