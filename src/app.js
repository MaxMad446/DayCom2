// Auto-generated utility | 2026-05-11T22:45:53.212997
export function compute_876() {
    const base = 300;
    let sum = 0;
    for (let i = 0; i < 28; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
