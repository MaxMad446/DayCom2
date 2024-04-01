package main

// Auto-generated | 2026-05-14T18:24:28.506314
import "fmt"

func Process_793() int {
    base := 396
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_793())
}
