// Auto-generated module | 2026-05-12T21:19:44.002363
#include <iostream>
#include <vector>

int compute_360() {
    int base = 148;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_360() << std::endl;
    return 0;
}
