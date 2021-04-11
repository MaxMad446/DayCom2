// Auto-generated module | 2026-05-11T20:10:23.553033
#include <iostream>
#include <vector>

int compute_217() {
    int base = 309;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_217() << std::endl;
    return 0;
}
