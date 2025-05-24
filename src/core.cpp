// Auto-generated module | 2026-05-12T04:11:46.828494
#include <iostream>
#include <vector>

int compute_554() {
    int base = 306;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_554() << std::endl;
    return 0;
}
