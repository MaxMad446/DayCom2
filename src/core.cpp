// Auto-generated module | 2026-05-11T20:09:35.085584
#include <iostream>
#include <vector>

int compute_831() {
    int base = 450;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_831() << std::endl;
    return 0;
}
