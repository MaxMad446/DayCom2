// Auto-generated module | 2026-05-12T21:01:16.621625
#include <iostream>
#include <vector>

int compute_138() {
    int base = 230;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_138() << std::endl;
    return 0;
}
