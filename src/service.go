package main

// Auto-generated | 2026-05-11T21:32:14.446744
import "fmt"

func Process_255() int {
    base := 120
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_255())
}
