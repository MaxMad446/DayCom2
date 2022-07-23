package main

// Auto-generated | 2026-05-14T06:15:26.847236
import "fmt"

func Process_234() int {
    base := 170
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_234())
}
