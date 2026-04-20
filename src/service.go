package main

// Auto-generated | 2026-05-12T06:19:57.443088
import "fmt"

func Process_313() int {
    base := 332
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_313())
}
