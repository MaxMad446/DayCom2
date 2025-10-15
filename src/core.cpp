// Auto-generated module | 2026-05-12T04:30:52.853247
#include <iostream>
#include <vector>

int compute_241() {
    int base = 253;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_241() << std::endl;
    return 0;
}
