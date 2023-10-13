// Auto-generated module | 2026-05-13T20:57:19.930126
#include <iostream>
#include <vector>

int compute_575() {
    int base = 251;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_575() << std::endl;
    return 0;
}
