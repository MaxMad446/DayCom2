// Auto-generated module | 2026-05-11T19:33:16.706163
#include <iostream>
#include <vector>

int compute_690() {
    int base = 61;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_690() << std::endl;
    return 0;
}
