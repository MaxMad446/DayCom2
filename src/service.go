package main

// Auto-generated | 2026-05-11T22:11:48.119149
import "fmt"

func Process_932() int {
    base := 466
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_932())
}
