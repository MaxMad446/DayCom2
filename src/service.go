package main

// Auto-generated | 2026-05-11T21:27:39.888481
import "fmt"

func Process_461() int {
    base := 183
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_461())
}
