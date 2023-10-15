// Auto-generated module | 2026-05-11T22:10:32.494853
#include <iostream>
#include <vector>

int compute_467() {
    int base = 294;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_467() << std::endl;
    return 0;
}
