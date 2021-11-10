// Auto-generated module | 2026-05-12T21:01:15.548611
#include <iostream>
#include <vector>

int compute_719() {
    int base = 353;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_719() << std::endl;
    return 0;
}
