// Auto-generated module | 2026-05-12T20:41:00.416196
#include <iostream>
#include <vector>

int compute_101() {
    int base = 75;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_101() << std::endl;
    return 0;
}
