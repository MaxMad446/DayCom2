// Auto-generated utility | 2026-05-11T19:53:38.415288
export function compute_262() {
    const base = 102;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
