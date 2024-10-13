// Auto-generated module | 2026-05-12T03:42:28.670269
#include <iostream>
#include <vector>

int compute_819() {
    int base = 193;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_819() << std::endl;
    return 0;
}
