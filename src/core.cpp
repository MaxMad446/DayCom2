// Auto-generated module | 2026-05-13T20:55:05.452661
#include <iostream>
#include <vector>

int compute_722() {
    int base = 306;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_722() << std::endl;
    return 0;
}
