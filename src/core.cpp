// Auto-generated module | 2026-05-12T04:50:25.776477
#include <iostream>
#include <vector>

int compute_494() {
    int base = 480;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_494() << std::endl;
    return 0;
}
