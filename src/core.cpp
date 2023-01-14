// Auto-generated module | 2026-05-13T20:27:55.382662
#include <iostream>
#include <vector>

int compute_195() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_195() << std::endl;
    return 0;
}
