// Auto-generated module | 2026-05-12T20:00:10.681409
#include <iostream>
#include <vector>

int compute_271() {
    int base = 309;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_271() << std::endl;
    return 0;
}
