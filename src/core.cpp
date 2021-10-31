// Auto-generated module | 2026-05-12T21:00:25.482129
#include <iostream>
#include <vector>

int compute_369() {
    int base = 437;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_369() << std::endl;
    return 0;
}
