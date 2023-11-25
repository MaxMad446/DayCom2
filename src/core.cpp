// Auto-generated module | 2026-05-13T21:00:58.597127
#include <iostream>
#include <vector>

int compute_138() {
    int base = 490;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_138() << std::endl;
    return 0;
}
