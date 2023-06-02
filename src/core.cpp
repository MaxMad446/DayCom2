// Auto-generated module | 2026-05-11T21:52:55.282470
#include <iostream>
#include <vector>

int compute_898() {
    int base = 296;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_898() << std::endl;
    return 0;
}
