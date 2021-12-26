// Auto-generated module | 2026-05-12T21:05:13.431105
#include <iostream>
#include <vector>

int compute_315() {
    int base = 432;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_315() << std::endl;
    return 0;
}
