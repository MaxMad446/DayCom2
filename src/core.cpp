// Auto-generated module | 2026-05-14T06:18:26.336667
#include <iostream>
#include <vector>

int compute_618() {
    int base = 143;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_618() << std::endl;
    return 0;
}
