// Auto-generated module | 2026-05-14T06:24:30.194182
#include <iostream>
#include <vector>

int compute_400() {
    int base = 483;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_400() << std::endl;
    return 0;
}
