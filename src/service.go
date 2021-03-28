package main

// Auto-generated | 2026-05-12T20:42:04.532484
import "fmt"

func Process_961() int {
    base := 327
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_961())
}
