package main

// Auto-generated | 2026-05-13T20:58:35.997154
import "fmt"

func Process_652() int {
    base := 485
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_652())
}
