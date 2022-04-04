// Auto-generated module | 2026-05-11T20:57:15.452939
#include <iostream>
#include <vector>

int compute_856() {
    int base = 57;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_856() << std::endl;
    return 0;
}
