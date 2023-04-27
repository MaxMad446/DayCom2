// Auto-generated module | 2026-05-11T21:47:55.172103
#include <iostream>
#include <vector>

int compute_952() {
    int base = 394;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_952() << std::endl;
    return 0;
}
