package main

// Auto-generated | 2026-05-12T03:47:02.093756
import "fmt"

func Process_486() int {
    base := 73
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_486())
}
