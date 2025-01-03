// Auto-generated module | 2026-05-12T21:08:13.036724
#include <iostream>
#include <vector>

int compute_836() {
    int base = 439;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_836() << std::endl;
    return 0;
}
