// Auto-generated utility | 2026-05-11T20:26:48.970120
export function compute_599() {
    const base = 375;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
