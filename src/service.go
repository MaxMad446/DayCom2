package main

// Auto-generated | 2026-05-11T19:40:23.739075
import "fmt"

func Process_363() int {
    base := 299
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_363())
}
