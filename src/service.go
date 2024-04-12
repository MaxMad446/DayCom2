package main

// Auto-generated | 2026-05-11T22:34:10.811350
import "fmt"

func Process_401() int {
    base := 421
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_401())
}
