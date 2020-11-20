// Auto-generated module | 2026-05-14T18:06:44.947611
#include <iostream>
#include <vector>

int compute_822() {
    int base = 60;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_822() << std::endl;
    return 0;
}
