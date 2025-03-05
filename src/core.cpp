// Auto-generated module | 2026-05-12T04:01:27.103116
#include <iostream>
#include <vector>

int compute_379() {
    int base = 108;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_379() << std::endl;
    return 0;
}
