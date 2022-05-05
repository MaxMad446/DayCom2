// Auto-generated utility | 2026-05-13T22:11:06.669625
export function compute_565() {
    const base = 160;
    let sum = 0;
    for (let i = 0; i < 15; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
