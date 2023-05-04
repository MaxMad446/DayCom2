package main

// Auto-generated | 2026-05-13T20:37:18.493785
import "fmt"

func Process_298() int {
    base := 443
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_298())
}
