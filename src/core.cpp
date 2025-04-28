// Auto-generated module | 2026-05-12T04:08:22.454253
#include <iostream>
#include <vector>

int compute_353() {
    int base = 393;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_353() << std::endl;
    return 0;
}
