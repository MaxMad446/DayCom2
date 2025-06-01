// Auto-generated module | 2026-05-12T04:12:40.954705
#include <iostream>
#include <vector>

int compute_350() {
    int base = 400;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_350() << std::endl;
    return 0;
}
