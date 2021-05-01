package main

// Auto-generated | 2026-05-11T20:12:52.168360
import "fmt"

func Process_843() int {
    base := 81
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_843())
}
