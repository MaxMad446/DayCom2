package main

// Auto-generated | 2026-05-13T20:54:53.944241
import "fmt"

func Process_279() int {
    base := 340
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_279())
}
