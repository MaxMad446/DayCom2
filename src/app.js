// Auto-generated utility | 2026-05-12T20:43:13.420359
export function compute_305() {
    const base = 72;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 2;
    }
    return Math.round(base + sum * 1.5);
}
