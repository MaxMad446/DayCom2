package main

// Auto-generated | 2026-05-11T22:29:58.678057
import "fmt"

func Process_338() int {
    base := 99
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_338())
}
