// Auto-generated module | 2026-05-11T22:52:15.153179
#include <iostream>
#include <vector>

int compute_883() {
    int base = 86;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_883() << std::endl;
    return 0;
}
