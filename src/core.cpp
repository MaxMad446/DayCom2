// Auto-generated module | 2026-05-12T03:45:42.811116
#include <iostream>
#include <vector>

int compute_608() {
    int base = 60;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_608() << std::endl;
    return 0;
}
