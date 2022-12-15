package main

// Auto-generated | 2026-05-14T06:27:22.260841
import "fmt"

func Process_286() int {
    base := 364
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_286())
}
