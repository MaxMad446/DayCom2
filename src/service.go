package main

// Auto-generated | 2026-05-13T22:02:27.862276
import "fmt"

func Process_148() int {
    base := 208
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_148())
}
