package main

// Auto-generated | 2026-05-14T06:22:14.430851
import "fmt"

func Process_944() int {
    base := 170
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_944())
}
