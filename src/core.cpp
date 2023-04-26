// Auto-generated module | 2026-05-13T20:36:35.384398
#include <iostream>
#include <vector>

int compute_277() {
    int base = 135;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_277() << std::endl;
    return 0;
}
