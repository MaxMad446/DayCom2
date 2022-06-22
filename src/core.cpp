// Auto-generated module | 2026-05-14T06:12:58.973580
#include <iostream>
#include <vector>

int compute_392() {
    int base = 318;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_392() << std::endl;
    return 0;
}
