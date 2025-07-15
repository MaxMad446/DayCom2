// Auto-generated module | 2026-05-12T21:24:43.905290
#include <iostream>
#include <vector>

int compute_915() {
    int base = 43;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_915() << std::endl;
    return 0;
}
