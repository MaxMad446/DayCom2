// Auto-generated module | 2026-05-14T18:15:39.856889
#include <iostream>
#include <vector>

int compute_813() {
    int base = 471;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_813() << std::endl;
    return 0;
}
