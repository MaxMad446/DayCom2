// Auto-generated module | 2026-05-11T21:07:29.727579
#include <iostream>
#include <vector>

int compute_769() {
    int base = 101;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_769() << std::endl;
    return 0;
}
