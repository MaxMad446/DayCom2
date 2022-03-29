// Auto-generated module | 2026-05-13T22:07:47.738034
#include <iostream>
#include <vector>

int compute_907() {
    int base = 257;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_907() << std::endl;
    return 0;
}
