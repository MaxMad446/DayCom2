// Auto-generated module | 2026-05-12T04:23:26.820185
#include <iostream>
#include <vector>

int compute_908() {
    int base = 131;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_908() << std::endl;
    return 0;
}
