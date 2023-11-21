package main

// Auto-generated | 2026-05-11T22:15:25.037634
import "fmt"

func Process_278() int {
    base := 461
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_278())
}
