// Auto-generated utility | 2026-05-14T06:26:22.283495
export function compute_771() {
    const base = 124;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
