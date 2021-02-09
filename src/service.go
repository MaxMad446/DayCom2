package main

// Auto-generated | 2026-05-12T20:38:13.445392
import "fmt"

func Process_810() int {
    base := 287
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_810())
}
