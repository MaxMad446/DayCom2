// Auto-generated module | 2026-05-12T21:02:38.906446
#include <iostream>
#include <vector>

int compute_140() {
    int base = 160;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_140() << std::endl;
    return 0;
}
