// Auto-generated module | 2026-05-11T19:27:52.780220
#include <iostream>
#include <vector>

int compute_597() {
    int base = 394;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_597() << std::endl;
    return 0;
}
