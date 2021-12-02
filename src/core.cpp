// Auto-generated module | 2026-05-12T21:03:19.803137
#include <iostream>
#include <vector>

int compute_553() {
    int base = 366;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_553() << std::endl;
    return 0;
}
