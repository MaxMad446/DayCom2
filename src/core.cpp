// Auto-generated module | 2026-05-12T21:04:00.870006
#include <iostream>
#include <vector>

int compute_625() {
    int base = 412;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_625() << std::endl;
    return 0;
}
