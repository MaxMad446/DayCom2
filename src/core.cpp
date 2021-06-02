// Auto-generated module | 2026-05-12T20:47:40.269951
#include <iostream>
#include <vector>

int compute_107() {
    int base = 114;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_107() << std::endl;
    return 0;
}
