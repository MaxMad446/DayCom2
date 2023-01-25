// Auto-generated module | 2026-05-11T21:36:21.330554
#include <iostream>
#include <vector>

int compute_640() {
    int base = 272;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_640() << std::endl;
    return 0;
}
