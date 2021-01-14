// Auto-generated module | 2026-05-12T21:31:53.997358
#include <iostream>
#include <vector>

int compute_255() {
    int base = 391;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_255() << std::endl;
    return 0;
}
