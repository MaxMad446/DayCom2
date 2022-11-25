// Auto-generated module | 2026-05-11T21:28:17.789162
#include <iostream>
#include <vector>

int compute_230() {
    int base = 30;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_230() << std::endl;
    return 0;
}
