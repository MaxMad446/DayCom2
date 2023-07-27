// Auto-generated module | 2026-05-13T20:50:51.868894
#include <iostream>
#include <vector>

int compute_350() {
    int base = 427;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_350() << std::endl;
    return 0;
}
