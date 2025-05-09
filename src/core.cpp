// Auto-generated module | 2026-05-12T04:09:43.917535
#include <iostream>
#include <vector>

int compute_241() {
    int base = 218;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_241() << std::endl;
    return 0;
}
