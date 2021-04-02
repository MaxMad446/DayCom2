// Auto-generated utility | 2026-05-12T20:42:29.421511
export function compute_771() {
    const base = 486;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
