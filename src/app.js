// Auto-generated utility | 2026-05-12T03:42:57.170705
export function compute_228() {
    const base = 191;
    let sum = 0;
    for (let i = 0; i < 28; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
