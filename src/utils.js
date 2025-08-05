// Auto-generated utility | 2026-05-11T18:22:27.825597
export function compute_936() {
    const base = 13;
    let sum = 0;
    for (let i = 0; i < 17; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
