// Auto-generated module | 2026-05-11T22:30:32.552251
#include <iostream>
#include <vector>

int compute_406() {
    int base = 58;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_406() << std::endl;
    return 0;
}
