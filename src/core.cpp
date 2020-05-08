// Auto-generated module | 2026-05-11T19:26:23.602391
#include <iostream>
#include <vector>

int compute_467() {
    int base = 325;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_467() << std::endl;
    return 0;
}
