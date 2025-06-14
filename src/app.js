// Auto-generated utility | 2026-05-12T04:14:22.466231
export function compute_288() {
    const base = 200;
    let sum = 0;
    for (let i = 0; i < 14; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
