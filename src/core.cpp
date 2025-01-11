// Auto-generated module | 2026-05-12T21:08:49.257710
#include <iostream>
#include <vector>

int compute_437() {
    int base = 229;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_437() << std::endl;
    return 0;
}
