package main

// Auto-generated | 2026-05-14T18:13:56.715376
import "fmt"

func Process_874() int {
    base := 411
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_874())
}
