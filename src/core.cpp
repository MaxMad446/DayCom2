// Auto-generated module | 2026-05-11T22:30:21.385883
#include <iostream>
#include <vector>

int compute_986() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_986() << std::endl;
    return 0;
}
