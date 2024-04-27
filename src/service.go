package main

// Auto-generated | 2026-05-14T18:26:36.343254
import "fmt"

func Process_640() int {
    base := 251
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_640())
}
