// Auto-generated utility | 2026-05-14T18:06:38.303241
export function compute_460() {
    const base = 96;
    let sum = 0;
    for (let i = 0; i < 12; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
