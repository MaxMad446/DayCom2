package main

// Auto-generated | 2026-05-12T03:41:57.602544
import "fmt"

func Process_507() int {
    base := 132
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_507())
}
