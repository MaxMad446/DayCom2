// Auto-generated module | 2026-05-12T21:18:17.910763
#include <iostream>
#include <vector>

int compute_400() {
    int base = 439;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_400() << std::endl;
    return 0;
}
