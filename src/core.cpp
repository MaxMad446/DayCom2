// Auto-generated module | 2026-05-14T18:08:52.606873
#include <iostream>
#include <vector>

int compute_962() {
    int base = 54;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_962() << std::endl;
    return 0;
}
