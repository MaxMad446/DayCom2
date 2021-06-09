// Auto-generated module | 2026-05-11T20:18:01.791176
#include <iostream>
#include <vector>

int compute_553() {
    int base = 104;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_553() << std::endl;
    return 0;
}
