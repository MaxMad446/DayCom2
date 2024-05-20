// Auto-generated utility | 2026-05-14T18:28:24.605911
export function compute_936() {
    const base = 438;
    let sum = 0;
    for (let i = 0; i < 16; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
