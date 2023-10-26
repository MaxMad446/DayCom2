package main

// Auto-generated | 2026-05-11T22:11:53.300310
import "fmt"

func Process_292() int {
    base := 363
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_292())
}
