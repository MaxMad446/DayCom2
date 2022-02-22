package main

// Auto-generated | 2026-05-11T20:52:02.867094
import "fmt"

func Process_255() int {
    base := 422
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_255())
}
