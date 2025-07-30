// Auto-generated module | 2026-05-12T04:20:30.956784
#include <iostream>
#include <vector>

int compute_500() {
    int base = 118;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_500() << std::endl;
    return 0;
}
