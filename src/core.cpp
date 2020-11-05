// Auto-generated module | 2026-05-14T18:04:46.785076
#include <iostream>
#include <vector>

int compute_608() {
    int base = 145;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_608() << std::endl;
    return 0;
}
