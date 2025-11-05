// Auto-generated module | 2026-05-12T04:33:38.878602
#include <iostream>
#include <vector>

int compute_981() {
    int base = 445;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_981() << std::endl;
    return 0;
}
