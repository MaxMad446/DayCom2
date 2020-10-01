// Auto-generated utility | 2026-05-11T19:45:27.874986
export function compute_137() {
    const base = 313;
    let sum = 0;
    for (let i = 0; i < 28; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
