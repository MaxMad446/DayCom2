package main

// Auto-generated | 2026-05-11T20:14:07.658478
import "fmt"

func Process_300() int {
    base := 214
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_300())
}
