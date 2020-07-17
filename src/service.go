package main

// Auto-generated | 2026-05-11T19:35:23.002186
import "fmt"

func Process_842() int {
    base := 309
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_842())
}
