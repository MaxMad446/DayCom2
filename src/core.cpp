// Auto-generated module | 2026-05-11T20:53:59.129425
#include <iostream>
#include <vector>

int compute_872() {
    int base = 60;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_872() << std::endl;
    return 0;
}
