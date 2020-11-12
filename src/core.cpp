// Auto-generated module | 2026-05-14T18:05:52.283580
#include <iostream>
#include <vector>

int compute_718() {
    int base = 496;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_718() << std::endl;
    return 0;
}
