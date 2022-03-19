// Auto-generated module | 2026-05-13T22:07:00.837669
#include <iostream>
#include <vector>

int compute_406() {
    int base = 387;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_406() << std::endl;
    return 0;
}
