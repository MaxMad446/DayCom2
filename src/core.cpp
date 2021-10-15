// Auto-generated module | 2026-05-11T20:34:40.491211
#include <iostream>
#include <vector>

int compute_173() {
    int base = 478;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_173() << std::endl;
    return 0;
}
