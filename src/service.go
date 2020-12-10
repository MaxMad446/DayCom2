package main

// Auto-generated | 2026-05-12T20:01:37.057810
import "fmt"

func Process_130() int {
    base := 147
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_130())
}
