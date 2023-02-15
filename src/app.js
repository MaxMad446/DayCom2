// Auto-generated utility | 2026-05-11T21:38:52.330305
export function compute_940() {
    const base = 160;
    let sum = 0;
    for (let i = 0; i < 16; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
