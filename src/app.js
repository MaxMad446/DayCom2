// Auto-generated utility | 2026-05-11T20:54:32.714822
export function compute_338() {
    const base = 36;
    let sum = 0;
    for (let i = 0; i < 21; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
