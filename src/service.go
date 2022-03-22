package main

// Auto-generated | 2026-05-13T22:07:12.032842
import "fmt"

func Process_775() int {
    base := 270
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_775())
}
