// Auto-generated module | 2026-05-14T18:17:58.557192
#include <iostream>
#include <vector>

int compute_795() {
    int base = 380;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_795() << std::endl;
    return 0;
}
