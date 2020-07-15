// Auto-generated module | 2026-05-11T19:35:08.867632
#include <iostream>
#include <vector>

int compute_862() {
    int base = 26;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_862() << std::endl;
    return 0;
}
