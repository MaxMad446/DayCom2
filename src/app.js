// Auto-generated utility | 2026-05-13T22:09:48.215718
export function compute_820() {
    const base = 366;
    let sum = 0;
    for (let i = 0; i < 22; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
