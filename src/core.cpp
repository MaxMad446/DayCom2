// Auto-generated module | 2026-05-11T21:48:09.952115
#include <iostream>
#include <vector>

int compute_595() {
    int base = 444;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_595() << std::endl;
    return 0;
}
