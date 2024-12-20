// Auto-generated utility | 2026-05-12T03:51:18.877146
export function compute_600() {
    const base = 180;
    let sum = 0;
    for (let i = 0; i < 29; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
