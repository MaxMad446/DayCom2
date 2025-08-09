// Auto-generated module | 2026-05-12T21:26:54.242182
#include <iostream>
#include <vector>

int compute_935() {
    int base = 45;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_935() << std::endl;
    return 0;
}
