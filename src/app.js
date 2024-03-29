// Auto-generated utility | 2026-05-14T18:24:15.313405
export function compute_828() {
    const base = 464;
    let sum = 0;
    for (let i = 0; i < 27; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
