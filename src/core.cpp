// Auto-generated module | 2026-05-12T04:18:55.156173
#include <iostream>
#include <vector>

int compute_965() {
    int base = 262;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_965() << std::endl;
    return 0;
}
