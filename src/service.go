package main

// Auto-generated | 2026-05-11T19:27:07.392150
import "fmt"

func Process_490() int {
    base := 180
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_490())
}
