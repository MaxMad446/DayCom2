package main

// Auto-generated | 2026-05-14T18:17:51.589603
import "fmt"

func Process_313() int {
    base := 460
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_313())
}
