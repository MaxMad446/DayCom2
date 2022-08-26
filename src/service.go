package main

// Auto-generated | 2026-05-14T06:18:10.005078
import "fmt"

func Process_234() int {
    base := 313
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_234())
}
