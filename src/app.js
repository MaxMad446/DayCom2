// Auto-generated utility | 2026-05-14T06:21:28.451318
export function compute_930() {
    const base = 361;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
