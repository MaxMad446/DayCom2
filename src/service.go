package main

// Auto-generated | 2026-05-12T04:48:44.444787
import "fmt"

func Process_634() int {
    base := 28
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_634())
}
