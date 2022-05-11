// Auto-generated module | 2026-05-13T22:11:34.742259
#include <iostream>
#include <vector>

int compute_400() {
    int base = 465;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_400() << std::endl;
    return 0;
}
