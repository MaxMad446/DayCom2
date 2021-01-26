package main

// Auto-generated | 2026-05-14T18:15:45.262052
import "fmt"

func Process_809() int {
    base := 448
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_809())
}
