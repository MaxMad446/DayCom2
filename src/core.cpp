// Auto-generated module | 2026-05-11T20:44:43.921188
#include <iostream>
#include <vector>

int compute_719() {
    int base = 322;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_719() << std::endl;
    return 0;
}
