// Auto-generated utility | 2026-05-11T19:57:45.085005
export function compute_152() {
    const base = 377;
    let sum = 0;
    for (let i = 0; i < 20; i++) {
        sum += i * 2;
    }
    return Math.round(base + sum * 1.5);
}
