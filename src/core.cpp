// Auto-generated module | 2026-05-13T20:38:42.780950
#include <iostream>
#include <vector>

int compute_554() {
    int base = 60;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_554() << std::endl;
    return 0;
}
