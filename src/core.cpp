// Auto-generated module | 2026-05-12T04:25:00.652512
#include <iostream>
#include <vector>

int compute_146() {
    int base = 329;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_146() << std::endl;
    return 0;
}
