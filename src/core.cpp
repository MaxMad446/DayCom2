// Auto-generated module | 2026-05-13T22:10:00.183528
#include <iostream>
#include <vector>

int compute_420() {
    int base = 51;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_420() << std::endl;
    return 0;
}
