// Auto-generated module | 2026-05-11T20:27:14.312938
#include <iostream>
#include <vector>

int compute_804() {
    int base = 87;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_804() << std::endl;
    return 0;
}
