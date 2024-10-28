// Auto-generated module | 2026-05-12T03:44:27.091686
#include <iostream>
#include <vector>

int compute_434() {
    int base = 377;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_434() << std::endl;
    return 0;
}
