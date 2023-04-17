// Auto-generated module | 2026-05-13T20:35:52.365990
#include <iostream>
#include <vector>

int compute_676() {
    int base = 27;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_676() << std::endl;
    return 0;
}
