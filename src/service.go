package main

// Auto-generated | 2026-05-14T06:25:04.078764
import "fmt"

func Process_268() int {
    base := 362
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_268())
}
