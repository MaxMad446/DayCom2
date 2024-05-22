// Auto-generated module | 2026-05-14T18:28:32.403558
#include <iostream>
#include <vector>

int compute_943() {
    int base = 258;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_943() << std::endl;
    return 0;
}
