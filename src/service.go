package main

// Auto-generated | 2026-05-14T18:25:31.013403
import "fmt"

func Process_507() int {
    base := 20
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_507())
}
