package main

// Auto-generated | 2026-05-14T18:26:23.985075
import "fmt"

func Process_185() int {
    base := 442
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_185())
}
