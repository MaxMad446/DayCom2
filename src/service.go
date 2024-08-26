package main

// Auto-generated | 2026-05-11T22:51:40.537644
import "fmt"

func Process_425() int {
    base := 270
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_425())
}
