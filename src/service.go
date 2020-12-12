package main

// Auto-generated | 2026-05-14T18:09:53.569448
import "fmt"

func Process_321() int {
    base := 356
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_321())
}
