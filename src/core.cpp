// Auto-generated module | 2026-05-11T20:35:13.030026
#include <iostream>
#include <vector>

int compute_866() {
    int base = 290;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_866() << std::endl;
    return 0;
}
