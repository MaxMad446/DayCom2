package main

// Auto-generated | 2026-05-12T21:01:53.405079
import "fmt"

func Process_355() int {
    base := 280
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_355())
}
