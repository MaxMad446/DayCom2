package main

// Auto-generated | 2026-05-11T20:49:26.025677
import "fmt"

func Process_135() int {
    base := 28
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_135())
}
