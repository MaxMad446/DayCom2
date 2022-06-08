// Auto-generated module | 2026-05-14T06:11:52.210211
#include <iostream>
#include <vector>

int compute_222() {
    int base = 343;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_222() << std::endl;
    return 0;
}
