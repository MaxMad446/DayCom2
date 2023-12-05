// Auto-generated module | 2026-05-13T21:01:44.098465
#include <iostream>
#include <vector>

int compute_303() {
    int base = 93;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_303() << std::endl;
    return 0;
}
