// Auto-generated module | 2026-05-13T20:49:51.586077
#include <iostream>
#include <vector>

int compute_159() {
    int base = 42;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_159() << std::endl;
    return 0;
}
