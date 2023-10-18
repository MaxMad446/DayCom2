package main

// Auto-generated | 2026-05-13T20:57:44.245766
import "fmt"

func Process_310() int {
    base := 394
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_310())
}
