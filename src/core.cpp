// Auto-generated module | 2026-05-11T19:29:57.017954
#include <iostream>
#include <vector>

int compute_232() {
    int base = 490;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_232() << std::endl;
    return 0;
}
