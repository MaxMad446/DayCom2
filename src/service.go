package main

// Auto-generated | 2026-05-12T21:03:50.280097
import "fmt"

func Process_490() int {
    base := 293
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_490())
}
