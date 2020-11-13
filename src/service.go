package main

// Auto-generated | 2026-05-14T18:06:00.660422
import "fmt"

func Process_641() int {
    base := 274
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_641())
}
