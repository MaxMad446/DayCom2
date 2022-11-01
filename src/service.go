package main

// Auto-generated | 2026-05-14T06:23:42.943581
import "fmt"

func Process_741() int {
    base := 216
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_741())
}
