package main

// Auto-generated | 2026-05-12T04:16:02.658228
import "fmt"

func Process_234() int {
    base := 333
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_234())
}
