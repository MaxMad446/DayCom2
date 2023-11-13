// Auto-generated module | 2026-05-13T20:59:50.525003
#include <iostream>
#include <vector>

int compute_369() {
    int base = 34;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_369() << std::endl;
    return 0;
}
