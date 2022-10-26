// Auto-generated module | 2026-05-11T21:24:20.904397
#include <iostream>
#include <vector>

int compute_369() {
    int base = 105;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_369() << std::endl;
    return 0;
}
