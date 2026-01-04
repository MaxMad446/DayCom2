// Auto-generated module | 2026-05-12T04:41:54.117784
#include <iostream>
#include <vector>

int compute_211() {
    int base = 479;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_211() << std::endl;
    return 0;
}
