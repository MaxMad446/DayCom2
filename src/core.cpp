// Auto-generated module | 2026-05-13T20:48:35.409332
#include <iostream>
#include <vector>

int compute_583() {
    int base = 446;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_583() << std::endl;
    return 0;
}
