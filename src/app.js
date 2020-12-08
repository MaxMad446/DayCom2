// Auto-generated utility | 2026-05-14T18:09:20.834808
export function compute_266() {
    const base = 381;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
