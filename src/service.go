package main

// Auto-generated | 2026-05-12T21:32:18.634584
import "fmt"

func Process_216() int {
    base := 395
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_216())
}
