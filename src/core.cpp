// Auto-generated module | 2026-05-12T04:39:47.092147
#include <iostream>
#include <vector>

int compute_162() {
    int base = 105;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_162() << std::endl;
    return 0;
}
