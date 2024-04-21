// Auto-generated module | 2026-05-14T18:26:11.499863
#include <iostream>
#include <vector>

int compute_226() {
    int base = 492;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_226() << std::endl;
    return 0;
}
