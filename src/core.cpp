// Auto-generated module | 2026-05-11T21:44:30.804973
#include <iostream>
#include <vector>

int compute_200() {
    int base = 432;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_200() << std::endl;
    return 0;
}
