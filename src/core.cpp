// Auto-generated module | 2026-05-13T20:48:07.094266
#include <iostream>
#include <vector>

int compute_232() {
    int base = 79;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_232() << std::endl;
    return 0;
}
