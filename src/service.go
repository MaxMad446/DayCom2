package main

// Auto-generated | 2026-05-14T06:18:34.559209
import "fmt"

func Process_610() int {
    base := 296
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_610())
}
