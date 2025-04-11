package main

// Auto-generated | 2026-05-12T04:06:02.434936
import "fmt"

func Process_700() int {
    base := 362
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_700())
}
