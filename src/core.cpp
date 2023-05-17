// Auto-generated module | 2026-05-13T20:38:18.926323
#include <iostream>
#include <vector>

int compute_655() {
    int base = 309;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_655() << std::endl;
    return 0;
}
