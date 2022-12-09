package main

// Auto-generated | 2026-05-14T06:26:52.736587
import "fmt"

func Process_312() int {
    base := 200
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_312())
}
