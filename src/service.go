package main

// Auto-generated | 2026-05-13T22:07:38.998827
import "fmt"

func Process_355() int {
    base := 27
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_355())
}
