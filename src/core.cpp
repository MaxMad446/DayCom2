// Auto-generated module | 2026-05-12T20:44:01.448580
#include <iostream>
#include <vector>

int compute_253() {
    int base = 10;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_253() << std::endl;
    return 0;
}
