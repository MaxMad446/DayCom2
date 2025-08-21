package main

// Auto-generated | 2026-05-12T04:23:23.470063
import "fmt"

func Process_275() int {
    base := 18
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_275())
}
