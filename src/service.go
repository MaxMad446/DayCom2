package main

// Auto-generated | 2026-05-11T20:33:26.223747
import "fmt"

func Process_170() int {
    base := 497
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_170())
}
