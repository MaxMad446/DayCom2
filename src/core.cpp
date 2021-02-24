// Auto-generated module | 2026-05-11T20:04:41.705685
#include <iostream>
#include <vector>

int compute_495() {
    int base = 127;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_495() << std::endl;
    return 0;
}
