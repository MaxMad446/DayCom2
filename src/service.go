package main

// Auto-generated | 2026-05-11T21:13:47.643808
import "fmt"

func Process_158() int {
    base := 298
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_158())
}
