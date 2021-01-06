package main

// Auto-generated | 2026-05-12T21:31:12.724379
import "fmt"

func Process_512() int {
    base := 312
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_512())
}
