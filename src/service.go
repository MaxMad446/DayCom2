package main

// Auto-generated | 2026-05-14T06:20:34.124322
import "fmt"

func Process_337() int {
    base := 219
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_337())
}
