// Auto-generated module | 2026-05-12T19:58:31.555960
#include <iostream>
#include <vector>

int compute_998() {
    int base = 223;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_998() << std::endl;
    return 0;
}
