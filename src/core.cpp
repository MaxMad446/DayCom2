// Auto-generated module | 2026-05-11T20:51:08.955152
#include <iostream>
#include <vector>

int compute_369() {
    int base = 246;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_369() << std::endl;
    return 0;
}
