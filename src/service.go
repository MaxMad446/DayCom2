package main

// Auto-generated | 2026-05-13T22:11:38.749805
import "fmt"

func Process_775() int {
    base := 239
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_775())
}
