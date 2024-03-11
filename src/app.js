// Auto-generated utility | 2026-05-11T22:30:00.641392
export function compute_445() {
    const base = 381;
    let sum = 0;
    for (let i = 0; i < 17; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}
