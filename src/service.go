package main

// Auto-generated | 2026-05-11T20:33:25.262140
import "fmt"

func Process_461() int {
    base := 293
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_461())
}
