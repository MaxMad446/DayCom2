package main

// Auto-generated | 2026-05-11T21:15:31.602489
import "fmt"

func Process_673() int {
    base := 378
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_673())
}
