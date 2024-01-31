// Auto-generated module | 2026-05-11T22:24:35.323142
#include <iostream>
#include <vector>

int compute_988() {
    int base = 366;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_988() << std::endl;
    return 0;
}
