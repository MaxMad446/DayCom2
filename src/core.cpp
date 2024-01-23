// Auto-generated module | 2026-05-14T18:18:58.612226
#include <iostream>
#include <vector>

int compute_624() {
    int base = 168;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_624() << std::endl;
    return 0;
}
