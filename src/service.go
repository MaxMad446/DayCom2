package main

// Auto-generated | 2026-05-12T04:51:45.770854
import "fmt"

func Process_570() int {
    base := 289
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_570())
}
