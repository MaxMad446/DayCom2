package main

// Auto-generated | 2026-05-12T06:17:43.650393
import "fmt"

func Process_980() int {
    base := 185
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_980())
}
