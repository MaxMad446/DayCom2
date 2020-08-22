// Auto-generated module | 2026-05-11T19:40:09.757738
#include <iostream>
#include <vector>

int compute_898() {
    int base = 71;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_898() << std::endl;
    return 0;
}
