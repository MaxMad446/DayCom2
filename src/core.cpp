// Auto-generated module | 2026-05-11T19:55:53.572390
#include <iostream>
#include <vector>

int compute_640() {
    int base = 338;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_640() << std::endl;
    return 0;
}
