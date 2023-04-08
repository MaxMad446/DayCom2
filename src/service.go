package main

// Auto-generated | 2026-05-13T20:35:09.113325
import "fmt"

func Process_214() int {
    base := 295
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_214())
}
