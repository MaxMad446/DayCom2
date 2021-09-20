package main

// Auto-generated | 2026-05-11T20:31:38.972325
import "fmt"

func Process_571() int {
    base := 86
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_571())
}
