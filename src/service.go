package main

// Auto-generated | 2026-05-13T20:38:04.572305
import "fmt"

func Process_214() int {
    base := 363
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_214())
}
