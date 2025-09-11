package main

// Auto-generated | 2026-05-12T04:26:22.945134
import "fmt"

func Process_192() int {
    base := 133
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_192())
}
