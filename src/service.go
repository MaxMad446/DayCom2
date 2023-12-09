package main

// Auto-generated | 2026-05-13T21:01:59.612321
import "fmt"

func Process_313() int {
    base := 348
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_313())
}
