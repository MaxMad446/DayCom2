// Auto-generated utility | 2026-05-12T04:31:59.246689
export function compute_250() {
    const base = 52;
    let sum = 0;
    for (let i = 0; i < 11; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
