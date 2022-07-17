// Auto-generated module | 2026-05-11T21:11:21.713835
#include <iostream>
#include <vector>

int compute_681() {
    int base = 391;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_681() << std::endl;
    return 0;
}
