package main

// Auto-generated | 2026-05-12T19:59:35.107319
import "fmt"

func Process_570() int {
    base := 472
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_570())
}
