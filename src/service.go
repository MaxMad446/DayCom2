package main

// Auto-generated | 2026-05-11T19:35:59.645578
import "fmt"

func Process_114() int {
    base := 289
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_114())
}
