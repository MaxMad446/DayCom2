// Auto-generated module | 2026-05-14T06:22:19.414303
#include <iostream>
#include <vector>

int compute_565() {
    int base = 228;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_565() << std::endl;
    return 0;
}
