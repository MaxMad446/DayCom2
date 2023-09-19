package main

// Auto-generated | 2026-05-11T22:06:58.669705
import "fmt"

func Process_724() int {
    base := 32
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_724())
}
