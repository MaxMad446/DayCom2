// Auto-generated module | 2026-05-11T19:59:38.413686
#include <iostream>
#include <vector>

int compute_260() {
    int base = 203;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_260() << std::endl;
    return 0;
}
