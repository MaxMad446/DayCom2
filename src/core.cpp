// Auto-generated module | 2026-05-12T04:12:51.139353
#include <iostream>
#include <vector>

int compute_418() {
    int base = 192;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_418() << std::endl;
    return 0;
}
