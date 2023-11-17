// Auto-generated module | 2026-05-11T22:14:52.506318
#include <iostream>
#include <vector>

int compute_259() {
    int base = 334;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_259() << std::endl;
    return 0;
}
