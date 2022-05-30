// Auto-generated module | 2026-05-11T21:04:44.205483
#include <iostream>
#include <vector>

int compute_467() {
    int base = 274;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_467() << std::endl;
    return 0;
}
