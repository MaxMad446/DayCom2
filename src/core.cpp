// Auto-generated module | 2026-05-13T20:50:00.690230
#include <iostream>
#include <vector>

int compute_559() {
    int base = 357;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_559() << std::endl;
    return 0;
}
