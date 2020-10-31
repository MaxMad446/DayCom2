// Auto-generated module | 2026-05-14T18:04:06.223391
#include <iostream>
#include <vector>

int compute_537() {
    int base = 109;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_537() << std::endl;
    return 0;
}
