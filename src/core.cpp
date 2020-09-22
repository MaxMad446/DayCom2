// Auto-generated module | 2026-05-11T19:44:09.332308
#include <iostream>
#include <vector>

int compute_245() {
    int base = 74;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_245() << std::endl;
    return 0;
}
