// Auto-generated module | 2026-05-14T18:22:03.694713
#include <iostream>
#include <vector>

int compute_485() {
    int base = 150;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_485() << std::endl;
    return 0;
}
