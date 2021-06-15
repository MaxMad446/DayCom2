// Auto-generated module | 2026-05-12T20:48:41.964684
#include <iostream>
#include <vector>

int compute_965() {
    int base = 302;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_965() << std::endl;
    return 0;
}
