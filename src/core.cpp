// Auto-generated module | 2026-05-13T21:01:21.964394
#include <iostream>
#include <vector>

int compute_954() {
    int base = 119;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_954() << std::endl;
    return 0;
}
