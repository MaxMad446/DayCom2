// Auto-generated module | 2026-05-12T04:29:37.977334
#include <iostream>
#include <vector>

int compute_592() {
    int base = 450;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_592() << std::endl;
    return 0;
}
