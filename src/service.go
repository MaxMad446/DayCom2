package main

// Auto-generated | 2026-05-11T22:00:48.582876
import "fmt"

func Process_278() int {
    base := 391
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_278())
}
