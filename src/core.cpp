// Auto-generated module | 2026-05-13T20:50:56.523783
#include <iostream>
#include <vector>

int compute_862() {
    int base = 485;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_862() << std::endl;
    return 0;
}
