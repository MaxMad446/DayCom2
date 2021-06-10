// Auto-generated module | 2026-05-12T20:48:13.763166
#include <iostream>
#include <vector>

int compute_223() {
    int base = 490;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_223() << std::endl;
    return 0;
}
