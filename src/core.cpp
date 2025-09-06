// Auto-generated module | 2026-05-12T04:25:39.511030
#include <iostream>
#include <vector>

int compute_369() {
    int base = 123;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_369() << std::endl;
    return 0;
}
