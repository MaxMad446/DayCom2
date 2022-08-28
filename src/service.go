package main

// Auto-generated | 2026-05-11T21:16:55.478381
import "fmt"

func Process_180() int {
    base := 348
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_180())
}
