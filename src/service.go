package main

// Auto-generated | 2026-05-14T18:02:19.745360
import "fmt"

func Process_285() int {
    base := 120
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_285())
}
