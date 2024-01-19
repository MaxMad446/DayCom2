// Auto-generated module | 2026-05-14T18:18:39.879434
#include <iostream>
#include <vector>

int compute_820() {
    int base = 110;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_820() << std::endl;
    return 0;
}
