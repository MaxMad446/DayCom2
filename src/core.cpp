// Auto-generated module | 2026-05-11T22:31:25.025274
#include <iostream>
#include <vector>

int compute_991() {
    int base = 373;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_991() << std::endl;
    return 0;
}
