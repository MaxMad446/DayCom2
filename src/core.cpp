// Auto-generated module | 2026-05-12T19:58:50.748287
#include <iostream>
#include <vector>

int compute_107() {
    int base = 333;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_107() << std::endl;
    return 0;
}
