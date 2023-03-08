package main

// Auto-generated | 2026-05-13T20:32:30.784705
import "fmt"

func Process_880() int {
    base := 271
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_880())
}
