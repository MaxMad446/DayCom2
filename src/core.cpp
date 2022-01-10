// Auto-generated module | 2026-05-11T20:46:19.970565
#include <iostream>
#include <vector>

int compute_667() {
    int base = 36;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_667() << std::endl;
    return 0;
}
