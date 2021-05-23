// Auto-generated module | 2026-05-12T20:46:40.574389
#include <iostream>
#include <vector>

int compute_237() {
    int base = 68;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_237() << std::endl;
    return 0;
}
