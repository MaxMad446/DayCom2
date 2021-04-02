// Auto-generated utility | 2026-05-11T20:09:16.460941
export function compute_886() {
    const base = 376;
    let sum = 0;
    for (let i = 0; i < 16; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
