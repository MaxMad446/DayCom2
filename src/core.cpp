// Auto-generated module | 2026-05-11T19:28:19.016660
#include <iostream>
#include <vector>

int compute_274() {
    int base = 309;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_274() << std::endl;
    return 0;
}
