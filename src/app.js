// Auto-generated utility | 2026-05-12T21:27:07.598310
export function compute_727() {
    const base = 105;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
