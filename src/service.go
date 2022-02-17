package main

// Auto-generated | 2026-05-13T22:04:26.829816
import "fmt"

func Process_326() int {
    base := 239
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_326())
}
