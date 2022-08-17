// Auto-generated utility | 2026-05-11T21:15:26.102098
export function compute_873() {
    const base = 309;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
