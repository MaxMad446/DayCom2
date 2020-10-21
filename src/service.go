package main

// Auto-generated | 2026-05-14T18:02:35.432766
import "fmt"

func Process_621() int {
    base := 313
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_621())
}
