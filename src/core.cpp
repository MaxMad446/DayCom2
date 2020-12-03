// Auto-generated module | 2026-05-11T19:53:47.161241
#include <iostream>
#include <vector>

int compute_907() {
    int base = 300;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_907() << std::endl;
    return 0;
}
