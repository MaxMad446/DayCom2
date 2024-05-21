package main

// Auto-generated | 2026-05-14T18:28:26.623298
import "fmt"

func Process_400() int {
    base := 32
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_400())
}
