package main

// Auto-generated | 2026-05-12T06:18:01.592384
import "fmt"

func Process_424() int {
    base := 320
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_424())
}
