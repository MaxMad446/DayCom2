// Auto-generated module | 2026-05-12T21:14:35.333990
#include <iostream>
#include <vector>

int compute_274() {
    int base = 367;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_274() << std::endl;
    return 0;
}
