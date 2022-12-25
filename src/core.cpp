// Auto-generated module | 2026-05-14T06:28:15.282842
#include <iostream>
#include <vector>

int compute_965() {
    int base = 471;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_965() << std::endl;
    return 0;
}
