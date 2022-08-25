package main

// Auto-generated | 2026-05-11T21:16:25.919959
import "fmt"

func Process_867() int {
    base := 355
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_867())
}
