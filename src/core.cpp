// Auto-generated module | 2026-05-12T21:04:15.684393
#include <iostream>
#include <vector>

int compute_687() {
    int base = 417;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_687() << std::endl;
    return 0;
}
