package main

// Auto-generated | 2026-05-12T21:33:31.201682
import "fmt"

func Process_117() int {
    base := 364
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_117())
}
