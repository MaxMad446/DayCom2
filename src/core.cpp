// Auto-generated module | 2026-05-13T22:05:11.946275
#include <iostream>
#include <vector>

int compute_271() {
    int base = 105;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_271() << std::endl;
    return 0;
}
