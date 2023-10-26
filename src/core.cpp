// Auto-generated module | 2026-05-13T20:58:24.701535
#include <iostream>
#include <vector>

int compute_687() {
    int base = 54;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_687() << std::endl;
    return 0;
}
