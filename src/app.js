// Auto-generated utility | 2026-05-11T20:18:59.723984
export function compute_730() {
    const base = 488;
    let sum = 0;
    for (let i = 0; i < 24; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
