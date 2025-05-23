// Auto-generated utility | 2026-05-12T04:11:38.997480
export function compute_232() {
    const base = 74;
    let sum = 0;
    for (let i = 0; i < 17; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
