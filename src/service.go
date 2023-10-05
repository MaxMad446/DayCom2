package main

// Auto-generated | 2026-05-13T20:56:36.023638
import "fmt"

func Process_935() int {
    base := 299
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_935())
}
