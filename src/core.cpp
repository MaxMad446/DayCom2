// Auto-generated module | 2026-05-12T04:31:40.083746
#include <iostream>
#include <vector>

int compute_816() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_816() << std::endl;
    return 0;
}
