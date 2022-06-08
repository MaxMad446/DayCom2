// Auto-generated utility | 2026-05-14T06:11:47.950350
export function compute_123() {
    const base = 192;
    let sum = 0;
    for (let i = 0; i < 13; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
