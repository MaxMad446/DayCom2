// Auto-generated module | 2026-05-12T20:41:53.330764
#include <iostream>
#include <vector>

int compute_369() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_369() << std::endl;
    return 0;
}
