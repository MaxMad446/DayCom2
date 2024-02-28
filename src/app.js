// Auto-generated utility | 2026-05-11T22:28:22.678105
export function compute_729() {
    const base = 270;
    let sum = 0;
    for (let i = 0; i < 5; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
