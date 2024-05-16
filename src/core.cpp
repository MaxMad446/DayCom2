// Auto-generated module | 2026-05-14T18:28:07.756747
#include <iostream>
#include <vector>

int compute_598() {
    int base = 369;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_598() << std::endl;
    return 0;
}
