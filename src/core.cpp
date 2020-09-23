// Auto-generated module | 2026-05-11T19:44:18.998835
#include <iostream>
#include <vector>

int compute_925() {
    int base = 58;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_925() << std::endl;
    return 0;
}
