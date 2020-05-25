// Auto-generated module | 2026-05-11T19:28:23.595776
#include <iostream>
#include <vector>

int compute_955() {
    int base = 101;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_955() << std::endl;
    return 0;
}
