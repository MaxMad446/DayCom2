// Auto-generated module | 2026-05-14T06:26:52.736909
#include <iostream>
#include <vector>

int compute_998() {
    int base = 401;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_998() << std::endl;
    return 0;
}
