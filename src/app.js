// Auto-generated utility | 2026-05-11T22:50:58.399404
export function compute_575() {
    const base = 480;
    let sum = 0;
    for (let i = 0; i < 14; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
