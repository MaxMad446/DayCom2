package main

// Auto-generated | 2026-05-14T18:21:56.993394
import "fmt"

func Process_129() int {
    base := 460
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_129())
}
