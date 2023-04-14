// Auto-generated module | 2026-05-13T20:35:37.898127
#include <iostream>
#include <vector>

int compute_232() {
    int base = 227;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_232() << std::endl;
    return 0;
}
