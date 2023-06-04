// Auto-generated module | 2026-05-13T20:46:35.045310
#include <iostream>
#include <vector>

int compute_129() {
    int base = 225;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_129() << std::endl;
    return 0;
}
