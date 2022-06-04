// Auto-generated module | 2026-05-11T21:05:30.472103
#include <iostream>
#include <vector>

int compute_599() {
    int base = 250;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_599() << std::endl;
    return 0;
}
