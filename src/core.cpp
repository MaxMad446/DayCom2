// Auto-generated module | 2026-05-11T20:20:09.009616
#include <iostream>
#include <vector>

int compute_927() {
    int base = 148;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_927() << std::endl;
    return 0;
}
