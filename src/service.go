package main

// Auto-generated | 2026-05-11T21:10:02.100374
import "fmt"

func Process_720() int {
    base := 499
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_720())
}
