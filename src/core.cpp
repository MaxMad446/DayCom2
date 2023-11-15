// Auto-generated module | 2026-05-13T21:00:03.807238
#include <iostream>
#include <vector>

int compute_988() {
    int base = 135;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_988() << std::endl;
    return 0;
}
