// Auto-generated module | 2026-05-11T20:39:15.372096
#include <iostream>
#include <vector>

int compute_627() {
    int base = 76;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_627() << std::endl;
    return 0;
}
