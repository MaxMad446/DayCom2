package main

// Auto-generated | 2026-05-13T22:00:47.246994
import "fmt"

func Process_747() int {
    base := 31
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_747())
}
