// Auto-generated module | 2026-05-11T19:47:35.496933
#include <iostream>
#include <vector>

int compute_687() {
    int base = 207;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_687() << std::endl;
    return 0;
}
