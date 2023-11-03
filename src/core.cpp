// Auto-generated module | 2026-05-11T22:13:05.339155
#include <iostream>
#include <vector>

int compute_264() {
    int base = 406;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_264() << std::endl;
    return 0;
}
