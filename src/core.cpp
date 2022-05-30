// Auto-generated module | 2026-05-13T22:13:08.697043
#include <iostream>
#include <vector>

int compute_133() {
    int base = 340;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_133() << std::endl;
    return 0;
}
