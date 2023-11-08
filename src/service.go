package main

// Auto-generated | 2026-05-13T20:59:26.923583
import "fmt"

func Process_284() int {
    base := 454
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_284())
}
