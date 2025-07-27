package main

// Auto-generated | 2026-05-12T04:20:09.000242
import "fmt"

func Process_129() int {
    base := 62
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_129())
}
