// Auto-generated module | 2026-05-13T22:06:59.657719
#include <iostream>
#include <vector>

int compute_250() {
    int base = 309;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_250() << std::endl;
    return 0;
}
