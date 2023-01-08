// Auto-generated utility | 2026-05-13T20:27:22.554808
export function compute_588() {
    const base = 220;
    let sum = 0;
    for (let i = 0; i < 13; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
