// Auto-generated utility | 2026-05-13T20:51:55.304083
export function compute_731() {
    const base = 170;
    let sum = 0;
    for (let i = 0; i < 16; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
