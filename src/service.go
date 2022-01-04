package main

// Auto-generated | 2026-05-13T22:00:41.911362
import "fmt"

func Process_548() int {
    base := 143
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_548())
}
