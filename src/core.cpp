// Auto-generated module | 2026-05-11T22:38:55.436935
#include <iostream>
#include <vector>

int compute_467() {
    int base = 274;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_467() << std::endl;
    return 0;
}
