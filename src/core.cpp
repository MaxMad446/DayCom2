// Auto-generated module | 2026-05-14T18:27:12.971728
#include <iostream>
#include <vector>

int compute_410() {
    int base = 325;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_410() << std::endl;
    return 0;
}
