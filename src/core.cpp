// Auto-generated module | 2026-05-12T21:40:44.800753
#include <iostream>
#include <vector>

int compute_121() {
    int base = 465;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_121() << std::endl;
    return 0;
}
