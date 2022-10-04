// Auto-generated module | 2026-05-14T06:21:23.760857
#include <iostream>
#include <vector>

int compute_733() {
    int base = 275;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_733() << std::endl;
    return 0;
}
