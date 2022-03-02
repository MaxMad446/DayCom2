// Auto-generated module | 2026-05-13T22:05:30.094548
#include <iostream>
#include <vector>

int compute_369() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_369() << std::endl;
    return 0;
}
