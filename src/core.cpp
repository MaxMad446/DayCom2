// Auto-generated module | 2026-05-11T21:46:03.921916
#include <iostream>
#include <vector>

int compute_267() {
    int base = 110;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_267() << std::endl;
    return 0;
}
