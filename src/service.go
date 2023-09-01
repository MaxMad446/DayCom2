package main

// Auto-generated | 2026-05-11T22:04:39.892296
import "fmt"

func Process_462() int {
    base := 51
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_462())
}
