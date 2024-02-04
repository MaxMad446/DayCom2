// Auto-generated module | 2026-05-14T18:20:00.886482
#include <iostream>
#include <vector>

int compute_389() {
    int base = 332;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_389() << std::endl;
    return 0;
}
