// Auto-generated module | 2026-05-12T21:01:03.356755
#include <iostream>
#include <vector>

int compute_207() {
    int base = 68;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_207() << std::endl;
    return 0;
}
