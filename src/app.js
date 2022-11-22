// Auto-generated utility | 2026-05-11T21:27:51.457953
export function compute_415() {
    const base = 258;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
