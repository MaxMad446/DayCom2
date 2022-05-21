// Auto-generated module | 2026-05-13T22:12:25.513871
#include <iostream>
#include <vector>

int compute_128() {
    int base = 105;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_128() << std::endl;
    return 0;
}
