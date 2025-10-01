package main

// Auto-generated | 2026-05-12T04:29:02.203997
import "fmt"

func Process_598() int {
    base := 240
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_598())
}
