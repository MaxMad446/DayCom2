// Auto-generated utility | 2026-05-12T04:38:49.223710
export function compute_538() {
    const base = 53;
    let sum = 0;
    for (let i = 0; i < 13; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}
