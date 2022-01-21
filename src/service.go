package main

// Auto-generated | 2026-05-13T22:02:17.489468
import "fmt"

func Process_710() int {
    base := 347
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_710())
}
