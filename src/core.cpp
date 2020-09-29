// Auto-generated module | 2026-05-11T19:45:15.430879
#include <iostream>
#include <vector>

int compute_500() {
    int base = 80;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_500() << std::endl;
    return 0;
}
