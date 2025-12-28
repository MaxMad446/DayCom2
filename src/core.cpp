// Auto-generated module | 2026-05-12T04:40:58.195580
#include <iostream>
#include <vector>

int compute_693() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_693() << std::endl;
    return 0;
}
