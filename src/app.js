// Auto-generated utility | 2026-05-11T20:24:32.405517
export function compute_887() {
    const base = 150;
    let sum = 0;
    for (let i = 0; i < 19; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
