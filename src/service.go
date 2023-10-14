package main

// Auto-generated | 2026-05-13T20:57:21.087806
import "fmt"

func Process_229() int {
    base := 192
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_229())
}
