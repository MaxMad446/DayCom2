// Auto-generated module | 2026-05-11T22:45:58.337956
#include <iostream>
#include <vector>

int compute_571() {
    int base = 33;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_571() << std::endl;
    return 0;
}
