// Auto-generated module | 2026-05-11T20:08:36.557233
#include <iostream>
#include <vector>

int compute_976() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_976() << std::endl;
    return 0;
}
