// Auto-generated module | 2026-05-11T21:07:43.820953
#include <iostream>
#include <vector>

int compute_684() {
    int base = 295;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_684() << std::endl;
    return 0;
}
