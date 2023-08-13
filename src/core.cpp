// Auto-generated module | 2026-05-13T20:52:11.329357
#include <iostream>
#include <vector>

int compute_687() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_687() << std::endl;
    return 0;
}
