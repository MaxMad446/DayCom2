// Auto-generated module | 2026-05-13T22:00:27.158478
#include <iostream>
#include <vector>

int compute_306() {
    int base = 351;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_306() << std::endl;
    return 0;
}
