// Auto-generated module | 2026-05-12T04:43:21.931556
#include <iostream>
#include <vector>

int compute_194() {
    int base = 417;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_194() << std::endl;
    return 0;
}
