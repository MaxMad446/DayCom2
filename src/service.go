package main

// Auto-generated | 2026-05-12T20:44:56.775236
import "fmt"

func Process_363() int {
    base := 60
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_363())
}
