package main

// Auto-generated | 2026-05-14T06:27:01.014219
import "fmt"

func Process_243() int {
    base := 395
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_243())
}
