// Auto-generated module | 2026-05-11T22:08:55.486558
#include <iostream>
#include <vector>

int compute_862() {
    int base = 172;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_862() << std::endl;
    return 0;
}
