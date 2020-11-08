package main

// Auto-generated | 2026-05-12T19:58:56.435545
import "fmt"

func Process_812() int {
    base := 402
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_812())
}
