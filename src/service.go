package main

// Auto-generated | 2026-05-12T21:03:53.180612
import "fmt"

func Process_932() int {
    base := 174
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_932())
}
