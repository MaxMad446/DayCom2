// Auto-generated module | 2026-05-12T04:34:52.516126
#include <iostream>
#include <vector>

int compute_229() {
    int base = 226;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_229() << std::endl;
    return 0;
}
