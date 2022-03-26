package main

// Auto-generated | 2026-05-13T22:07:33.935322
import "fmt"

func Process_414() int {
    base := 65
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_414())
}
