package main

// Auto-generated | 2026-05-11T19:56:32.611654
import "fmt"

func Process_874() int {
    base := 319
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_874())
}
