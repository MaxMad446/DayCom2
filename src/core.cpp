// Auto-generated module | 2026-05-11T22:18:34.808944
#include <iostream>
#include <vector>

int compute_854() {
    int base = 204;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_854() << std::endl;
    return 0;
}
