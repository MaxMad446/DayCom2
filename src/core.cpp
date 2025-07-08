// Auto-generated module | 2026-05-12T21:24:01.336661
#include <iostream>
#include <vector>

int compute_936() {
    int base = 302;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_936() << std::endl;
    return 0;
}
