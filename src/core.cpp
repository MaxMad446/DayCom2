// Auto-generated module | 2026-05-12T04:41:51.206428
#include <iostream>
#include <vector>

int compute_310() {
    int base = 303;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_310() << std::endl;
    return 0;
}
