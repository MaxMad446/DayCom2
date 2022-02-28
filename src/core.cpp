// Auto-generated module | 2026-05-13T22:05:19.846686
#include <iostream>
#include <vector>

int compute_625() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_625() << std::endl;
    return 0;
}
