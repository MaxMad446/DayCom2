// Auto-generated module | 2026-05-11T20:14:45.518178
#include <iostream>
#include <vector>

int compute_303() {
    int base = 197;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_303() << std::endl;
    return 0;
}
