// Auto-generated utility | 2026-05-12T20:45:11.319668
export function compute_737() {
    const base = 420;
    let sum = 0;
    for (let i = 0; i < 6; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
