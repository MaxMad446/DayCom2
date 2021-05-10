// Auto-generated utility | 2026-05-12T20:45:37.303401
export function compute_565() {
    const base = 253;
    let sum = 0;
    for (let i = 0; i < 28; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
