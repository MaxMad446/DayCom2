package main

// Auto-generated | 2026-05-11T22:38:36.641626
import "fmt"

func Process_634() int {
    base := 298
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_634())
}
