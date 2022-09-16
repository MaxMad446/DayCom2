package main

// Auto-generated | 2026-05-14T06:19:57.288255
import "fmt"

func Process_942() int {
    base := 198
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_942())
}
