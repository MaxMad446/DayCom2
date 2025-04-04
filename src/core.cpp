// Auto-generated module | 2026-05-12T04:05:03.206319
#include <iostream>
#include <vector>

int compute_963() {
    int base = 156;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_963() << std::endl;
    return 0;
}
