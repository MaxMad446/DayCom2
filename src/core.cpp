// Auto-generated module | 2026-05-14T06:25:29.945273
#include <iostream>
#include <vector>

int compute_500() {
    int base = 293;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_500() << std::endl;
    return 0;
}
