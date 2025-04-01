// Auto-generated module | 2026-05-12T21:15:36.088938
#include <iostream>
#include <vector>

int compute_942() {
    int base = 321;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_942() << std::endl;
    return 0;
}
