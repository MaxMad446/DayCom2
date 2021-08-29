package main

// Auto-generated | 2026-05-11T20:28:50.075403
import "fmt"

func Process_876() int {
    base := 185
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_876())
}
