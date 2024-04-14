// Auto-generated module | 2026-05-11T22:34:27.063168
#include <iostream>
#include <vector>

int compute_369() {
    int base = 226;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_369() << std::endl;
    return 0;
}
