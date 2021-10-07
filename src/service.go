package main

// Auto-generated | 2026-05-11T20:33:40.239310
import "fmt"

func Process_819() int {
    base := 313
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_819())
}
