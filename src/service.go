package main

// Auto-generated | 2026-05-11T19:28:11.870236
import "fmt"

func Process_174() int {
    base := 299
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_174())
}
