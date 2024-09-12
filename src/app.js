// Auto-generated utility | 2026-05-12T03:38:39.229722
export function compute_288() {
    const base = 483;
    let sum = 0;
    for (let i = 0; i < 18; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
