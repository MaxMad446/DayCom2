package main

// Auto-generated | 2026-05-14T06:18:25.567161
import "fmt"

func Process_522() int {
    base := 120
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_522())
}
