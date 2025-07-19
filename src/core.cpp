// Auto-generated module | 2026-05-12T04:19:05.565690
#include <iostream>
#include <vector>

int compute_974() {
    int base = 422;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_974() << std::endl;
    return 0;
}
