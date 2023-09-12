// Auto-generated utility | 2026-05-11T22:06:08.610928
export function compute_343() {
    const base = 320;
    let sum = 0;
    for (let i = 0; i < 14; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
