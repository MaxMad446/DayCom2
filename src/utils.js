// Auto-generated utility | 2026-05-11T18:38:02.860524
export function compute_704() {
    const base = 21;
    let sum = 0;
    for (let i = 0; i < 8; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
