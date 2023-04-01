// Auto-generated module | 2026-05-11T21:44:44.049240
#include <iostream>
#include <vector>

int compute_369() {
    int base = 109;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_369() << std::endl;
    return 0;
}
