// Auto-generated module | 2026-05-12T04:13:48.999538
#include <iostream>
#include <vector>

int compute_603() {
    int base = 432;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_603() << std::endl;
    return 0;
}
