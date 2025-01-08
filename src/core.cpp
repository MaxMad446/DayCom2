// Auto-generated module | 2026-05-12T03:53:57.516980
#include <iostream>
#include <vector>

int compute_797() {
    int base = 379;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_797() << std::endl;
    return 0;
}
