// Auto-generated module | 2026-05-12T04:13:11.733394
#include <iostream>
#include <vector>

int compute_303() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_303() << std::endl;
    return 0;
}
