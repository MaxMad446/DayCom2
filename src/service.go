package main

// Auto-generated | 2026-05-13T20:51:37.385768
import "fmt"

func Process_412() int {
    base := 346
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_412())
}
