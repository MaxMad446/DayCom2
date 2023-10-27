// Auto-generated module | 2026-05-13T20:58:27.344698
#include <iostream>
#include <vector>

int compute_812() {
    int base = 157;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_812() << std::endl;
    return 0;
}
