// Auto-generated module | 2026-05-14T06:27:59.607483
#include <iostream>
#include <vector>

int compute_896() {
    int base = 17;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_896() << std::endl;
    return 0;
}
