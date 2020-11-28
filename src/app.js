// Auto-generated utility | 2026-05-12T20:00:40.998505
export function compute_714() {
    const base = 20;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
