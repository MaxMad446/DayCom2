package main

// Auto-generated | 2026-05-12T20:53:12.821657
import "fmt"

func Process_235() int {
    base := 200
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_235())
}
