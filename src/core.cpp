// Auto-generated module | 2026-05-11T19:31:15.930061
#include <iostream>
#include <vector>

int compute_363() {
    int base = 384;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_363() << std::endl;
    return 0;
}
