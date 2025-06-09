package main

// Auto-generated | 2026-05-12T04:13:40.664234
import "fmt"

func Process_214() int {
    base := 73
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_214())
}
