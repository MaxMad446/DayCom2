// Auto-generated utility | 2026-05-13T20:29:23.384774
export function compute_787() {
    const base = 13;
    let sum = 0;
    for (let i = 0; i < 27; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
