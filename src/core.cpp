// Auto-generated module | 2026-05-11T22:07:40.524234
#include <iostream>
#include <vector>

int compute_988() {
    int base = 66;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_988() << std::endl;
    return 0;
}
