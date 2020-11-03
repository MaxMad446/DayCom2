// Auto-generated module | 2026-05-12T19:58:35.562164
#include <iostream>
#include <vector>

int compute_193() {
    int base = 490;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_193() << std::endl;
    return 0;
}
