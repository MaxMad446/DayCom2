// Auto-generated module | 2026-05-13T20:34:48.714699
#include <iostream>
#include <vector>

int compute_891() {
    int base = 424;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_891() << std::endl;
    return 0;
}
