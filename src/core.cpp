// Auto-generated module | 2026-05-11T21:53:24.047695
#include <iostream>
#include <vector>

int compute_138() {
    int base = 415;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_138() << std::endl;
    return 0;
}
