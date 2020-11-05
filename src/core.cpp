// Auto-generated module | 2026-05-14T18:04:50.272700
#include <iostream>
#include <vector>

int compute_923() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_923() << std::endl;
    return 0;
}
