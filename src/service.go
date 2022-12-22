package main

// Auto-generated | 2026-05-14T06:27:59.607199
import "fmt"

func Process_130() int {
    base := 457
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_130())
}
