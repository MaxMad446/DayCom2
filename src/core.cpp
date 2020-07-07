// Auto-generated module | 2026-05-11T19:34:04.006331
#include <iostream>
#include <vector>

int compute_117() {
    int base = 309;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_117() << std::endl;
    return 0;
}
