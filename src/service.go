package main

// Auto-generated | 2026-05-14T18:18:18.032636
import "fmt"

func Process_641() int {
    base := 250
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_641())
}
