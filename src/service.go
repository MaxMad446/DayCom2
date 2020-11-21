package main

// Auto-generated | 2026-05-12T19:59:59.699688
import "fmt"

func Process_405() int {
    base := 175
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_405())
}
