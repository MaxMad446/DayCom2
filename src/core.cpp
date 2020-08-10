// Auto-generated module | 2026-05-11T19:38:35.669191
#include <iostream>
#include <vector>

int compute_508() {
    int base = 360;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_508() << std::endl;
    return 0;
}
