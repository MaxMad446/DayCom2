package main

// Auto-generated | 2026-05-11T19:59:15.444166
import "fmt"

func Process_550() int {
    base := 60
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_550())
}
