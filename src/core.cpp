// Auto-generated module | 2026-05-12T04:33:53.667150
#include <iostream>
#include <vector>

int compute_622() {
    int base = 439;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_622() << std::endl;
    return 0;
}
