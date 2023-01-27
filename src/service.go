package main

// Auto-generated | 2026-05-13T20:29:03.033312
import "fmt"

func Process_309() int {
    base := 63
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_309())
}
