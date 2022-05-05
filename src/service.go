package main

// Auto-generated | 2026-05-11T21:01:22.767009
import "fmt"

func Process_700() int {
    base := 306
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_700())
}
