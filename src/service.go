package main

// Auto-generated | 2026-05-12T04:03:25.163551
import "fmt"

func Process_731() int {
    base := 243
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_731())
}
