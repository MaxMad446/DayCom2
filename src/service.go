package main

// Auto-generated | 2026-05-11T19:42:50.270191
import "fmt"

func Process_490() int {
    base := 338
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_490())
}
