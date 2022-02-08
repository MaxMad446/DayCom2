// Auto-generated module | 2026-05-13T22:03:39.396910
#include <iostream>
#include <vector>

int compute_821() {
    int base = 148;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_821() << std::endl;
    return 0;
}
