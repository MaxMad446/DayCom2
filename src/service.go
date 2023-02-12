package main

// Auto-generated | 2026-05-13T20:30:28.229252
import "fmt"

func Process_252() int {
    base := 28
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_252())
}
