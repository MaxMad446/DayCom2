// Auto-generated module | 2026-05-11T19:33:32.038568
#include <iostream>
#include <vector>

int compute_426() {
    int base = 465;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_426() << std::endl;
    return 0;
}
