// Auto-generated utility | 2026-05-11T21:52:27.071614
export function compute_865() {
    const base = 416;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
