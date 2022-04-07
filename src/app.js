// Auto-generated utility | 2026-05-13T22:08:37.165342
export function compute_813() {
    const base = 377;
    let sum = 0;
    for (let i = 0; i < 13; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
