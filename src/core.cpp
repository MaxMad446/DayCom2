// Auto-generated module | 2026-05-11T20:52:55.621828
#include <iostream>
#include <vector>

int compute_904() {
    int base = 310;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_904() << std::endl;
    return 0;
}
