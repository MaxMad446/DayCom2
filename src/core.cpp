// Auto-generated module | 2026-05-11T22:15:36.166971
#include <iostream>
#include <vector>

int compute_681() {
    int base = 430;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_681() << std::endl;
    return 0;
}
