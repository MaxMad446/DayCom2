package main

// Auto-generated | 2026-05-14T06:25:24.356326
import "fmt"

func Process_438() int {
    base := 296
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_438())
}
