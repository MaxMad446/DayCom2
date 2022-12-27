// Auto-generated module | 2026-05-14T06:28:26.538176
#include <iostream>
#include <vector>

int compute_537() {
    int base = 325;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_537() << std::endl;
    return 0;
}
