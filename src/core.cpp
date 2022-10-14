// Auto-generated module | 2026-05-14T06:22:12.053385
#include <iostream>
#include <vector>

int compute_708() {
    int base = 241;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_708() << std::endl;
    return 0;
}
