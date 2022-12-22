// Auto-generated module | 2026-05-11T21:31:54.351148
#include <iostream>
#include <vector>

int compute_376() {
    int base = 376;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_376() << std::endl;
    return 0;
}
